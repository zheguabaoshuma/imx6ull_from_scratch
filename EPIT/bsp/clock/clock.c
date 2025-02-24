#include "clock.h"
#include "beep.h"
#include "delay.h"
void Clock_EnableAllCCGR(void)
{
    CCM->CCGR0 = 0xFFFFFFFF;
    CCM->CCGR1 = 0xFFFFFFFF;
    CCM->CCGR2 = 0xFFFFFFFF;
    CCM->CCGR3 = 0xFFFFFFFF;
    CCM->CCGR4 = 0xFFFFFFFF;
    CCM->CCGR5 = 0xFFFFFFFF;
    CCM->CCGR6 = 0xFFFFFFFF;
}

void Clock_Enable_CCGR_Module(uint32_t cg, uint32_t cgid)
{
    if (cg > 6 | cgid > 31)
    {
        return;
    }
    uint32_t* reg = (uint32_t*)(&(CCM->CCGR0) + (cg << 5));
    *reg |= (3 << (cgid << 1));
}

void Clock_Disable_CCGR_Module(uint32_t cg, uint32_t cgid)
{
    if (cg > 6 | cgid > 31)
    {
        return;
    }
    uint32_t* reg = (uint32_t*)(&(CCM->CCGR0) + (cg << 5));
    *reg &= ~(3 << (cgid << 1));
}

void ARM_PLL_Init(uint32_t outfreq)
{
    // if(outfreq < 600 || outfreq > 1300){
    //     return;
    // }
    uint32_t div_sel = (uint32_t)(outfreq * 2 / OSC24M);
    if(CCM->CCSR & (CCM_CCSR_PLL1_SW_CLK_SEL_MASK) == 0){
        CCM->CCSR &= ~(CCM_CCSR_STEP_SEL_MASK);    //set step_clk to osc24m
        CCM->CCSR |= CCM_CCSR_PLL1_SW_CLK_SEL_MASK; //set pll1_sw_clk to step_clk
    }
    uint32_t reg = CCM_ANALOG->PLL_ARM;
    // if(div_sel <= (reg & CCM_ANALOG_PLL_ARM_DIV_SELECT_MASK)){
    //     Beep_ON();
    //     delay(5000);
    //     Beep_OFF();
    // }
    reg &= ~(CCM_ANALOG_PLL_ARM_DIV_SELECT_MASK);
    reg |= CCM_ANALOG_PLL_ARM_DIV_SELECT(div_sel);
    CCM_ANALOG->PLL_ARM = reg;
    CCM->CACRR = 0x1; 
    while(CCM->CDHIPR & CCM_CDHIPR_ARM_PODF_BUSY_MASK);

    CCM->CCSR |= CCM_CCSR_STEP_SEL_MASK; //set step_clk to secondary_clk
    CCM->CCSR &= ~(CCM_CCSR_PLL1_SW_CLK_SEL_MASK); // set pll1_sw_clk to pll1_main_clk
}

void System_PLL_Init() //只需要设置pfd即可
{
    uint32_t reg = CCM_ANALOG->PFD_528;
    reg &= ~(CCM_ANALOG_PFD_528_PFD0_FRAC_MASK | CCM_ANALOG_PFD_528_PFD1_FRAC_MASK | CCM_ANALOG_PFD_528_PFD2_FRAC_MASK | CCM_ANALOG_PFD_528_PFD3_FRAC_MASK);//对应位置清零
    reg |= CCM_ANALOG_PFD_528_PFD0_FRAC(27) | CCM_ANALOG_PFD_528_PFD1_FRAC(16) | CCM_ANALOG_PFD_528_PFD2_FRAC(24) | CCM_ANALOG_PFD_528_PFD3_FRAC(32);//设置对应frac值
    CCM_ANALOG->PFD_528 = reg;
}

void USB1_PLL_Init() //只需要设置pfd即可
{
    uint32_t reg = CCM_ANALOG->PFD_480;
    reg &= ~(CCM_ANALOG_PFD_480_PFD0_FRAC_MASK | CCM_ANALOG_PFD_480_PFD1_FRAC_MASK | CCM_ANALOG_PFD_480_PFD2_FRAC_MASK | CCM_ANALOG_PFD_480_PFD3_FRAC_MASK);
    reg |= CCM_ANALOG_PFD_480_PFD0_FRAC(19) | CCM_ANALOG_PFD_480_PFD1_FRAC(17) | CCM_ANALOG_PFD_480_PFD2_FRAC(16) | CCM_ANALOG_PFD_480_PFD3_FRAC(12);
    CCM_ANALOG->PFD_480 = reg;
}

void AHB_CLK_ROOT_Init()
{
    uint32_t tmp_reg = CCM->CBCDR;
    tmp_reg &= ~(CCM_CBCMR_PRE_PERIPH_CLK_SEL_MASK);
    tmp_reg |= CCM_CBCMR_PRE_PERIPH_CLK_SEL(1);
    CCM->CBCDR = tmp_reg; //设置pre_periph_clk为pll2_pfd2

    tmp_reg = CCM->CBCDR;
    tmp_reg &= ~(CCM_CBCDR_PERIPH_CLK_SEL_MASK);
    tmp_reg |= CCM_CBCDR_PERIPH_CLK_SEL(0);
    tmp_reg &= ~(CCM_CBCDR_AHB_PODF_MASK);
    tmp_reg |= CCM_CBCDR_AHB_PODF(3);
    CCM->CBCDR = tmp_reg; //设置periph_clk为pre_periph_clk/3
    while(CCM->CDHIPR & CCM_CDHIPR_AHB_PODF_BUSY_MASK);//等待设置完成
}

void IPG_CLK_ROOT_Init()
{
    uint32_t tmp_reg = CCM->CBCDR;
    tmp_reg &= ~(CCM_CBCDR_IPG_PODF_MASK);
    tmp_reg |= CCM_CBCDR_IPG_PODF(1);
    CCM->CBCDR = tmp_reg; //设置ipg_clk为ahb_clk_root/2
}

void PERCLK_CLK_ROOT_Init()
{
    uint32_t tmp_reg = CCM->CSCMR1;
    tmp_reg &= ~(CCM_CSCMR1_PERCLK_PODF_MASK);
    tmp_reg |= CCM_CSCMR1_PERCLK_PODF(1);
    CCM->CSCMR1 = tmp_reg; //设置perclk_clk为ahb_clk_root/2
}

void CommonSystemClock_Init(void)
{
    AHB_CLK_ROOT_Init();
    IPG_CLK_ROOT_Init();
    PERCLK_CLK_ROOT_Init();
}