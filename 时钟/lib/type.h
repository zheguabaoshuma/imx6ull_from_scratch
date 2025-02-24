#ifndef _TYPE_H
#define _TYPE_H

#define __I volatile
#define __O volatile
#define __IO volatile

#define ON 1
#define OFF 0

#define INT32_MAX 0x7fffffff
#define INT32_MIN 0x80000000
#define UINT32_MAX 0xffffffff
#define INT16_MAX 0x7fff
#define INT16_MIN 0x8000
#define UINT16_MAX 0xffff
#define INT8_MAX 0x7f
#define INT8_MIN 0x80
#define UINT8_MAX 0xff

typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef signed long long int int64_t;

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;

typedef unsigned   char    u8_t;
typedef signed     char    s8_t;
typedef unsigned   short   u16_t;
typedef signed     short   s16_t;
typedef unsigned   int    u32_t;
typedef signed     int    s32_t;
typedef u32_t mem_ptr_t;
/*这个文件从这里开始，连同各个macro文件都可以直接用MCIMX6Y2.h替代*/
/* ----------------------------------------------------------------------------
   -- CCM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CCM_Peripheral_Access_Layer CCM Peripheral Access Layer
 * @{
 */

/** CCM - Register Layout Typedef */
typedef struct {
  __IO uint32_t CCR;                               /**< CCM Control Register, offset: 0x0 */
  __IO uint32_t CCDR;                              /**< CCM Control Divider Register, offset: 0x4 */
  __I  uint32_t CSR;                               /**< CCM Status Register, offset: 0x8 */
  __IO uint32_t CCSR;                              /**< CCM Clock Switcher Register, offset: 0xC */
  __IO uint32_t CACRR;                             /**< CCM Arm Clock Root Register, offset: 0x10 */
  __IO uint32_t CBCDR;                             /**< CCM Bus Clock Divider Register, offset: 0x14 */
  __IO uint32_t CBCMR;                             /**< CCM Bus Clock Multiplexer Register, offset: 0x18 */
  __IO uint32_t CSCMR1;                            /**< CCM Serial Clock Multiplexer Register 1, offset: 0x1C */
  __IO uint32_t CSCMR2;                            /**< CCM Serial Clock Multiplexer Register 2, offset: 0x20 */
  __IO uint32_t CSCDR1;                            /**< CCM Serial Clock Divider Register 1, offset: 0x24 */
  __IO uint32_t CS1CDR;                            /**< CCM SAI1 Clock Divider Register, offset: 0x28 */
  __IO uint32_t CS2CDR;                            /**< CCM SAI2 Clock Divider Register, offset: 0x2C */
  __IO uint32_t CDCDR;                             /**< CCM D1 Clock Divider Register, offset: 0x30 */
  __IO uint32_t CHSCCDR;                           /**< CCM HSC Clock Divider Register, offset: 0x34 */
  __IO uint32_t CSCDR2;                            /**< CCM Serial Clock Divider Register 2, offset: 0x38 */
  __IO uint32_t CSCDR3;                            /**< CCM Serial Clock Divider Register 3, offset: 0x3C */
       uint8_t RESERVED_0[8];
  __I  uint32_t CDHIPR;                            /**< CCM Divider Handshake In-Process Register, offset: 0x48 */
       uint8_t RESERVED_1[8];
  __IO uint32_t CLPCR;                             /**< CCM Low Power Control Register, offset: 0x54 */
  __IO uint32_t CISR;                              /**< CCM Interrupt Status Register, offset: 0x58 */
  __IO uint32_t CIMR;                              /**< CCM Interrupt Mask Register, offset: 0x5C */
  __IO uint32_t CCOSR;                             /**< CCM Clock Output Source Register, offset: 0x60 */
  __IO uint32_t CGPR;                              /**< CCM General Purpose Register, offset: 0x64 */
  __IO uint32_t CCGR0;                             /**< CCM Clock Gating Register 0, offset: 0x68 */
  __IO uint32_t CCGR1;                             /**< CCM Clock Gating Register 1, offset: 0x6C */
  __IO uint32_t CCGR2;                             /**< CCM Clock Gating Register 2, offset: 0x70 */
  __IO uint32_t CCGR3;                             /**< CCM Clock Gating Register 3, offset: 0x74 */
  __IO uint32_t CCGR4;                             /**< CCM Clock Gating Register 4, offset: 0x78 */
  __IO uint32_t CCGR5;                             /**< CCM Clock Gating Register 5, offset: 0x7C */
  __IO uint32_t CCGR6;                             /**< CCM Clock Gating Register 6, offset: 0x80 */
       uint8_t RESERVED_2[4];
  __IO uint32_t CMEOR;                             /**< CCM Module Enable Overide Register, offset: 0x88 */
} CCM_Type;

/* CCM - Peripheral instance base addresses */
/** Peripheral CCM base address */
#define CCM_BASE                                 (0x20C4000u)
/** Peripheral CCM base pointer */
#define CCM                                      ((CCM_Type *)CCM_BASE)

/* ----------------------------------------------------------------------------
   -- CCM_ANALOG Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CCM_ANALOG_Peripheral_Access_Layer CCM_ANALOG Peripheral Access Layer
 * @{
 */

/** CCM_ANALOG - Register Layout Typedef */
typedef struct {
  __IO uint32_t PLL_ARM;                           /**< Analog ARM PLL control Register, offset: 0x0 */
  __IO uint32_t PLL_ARM_SET;                       /**< Analog ARM PLL control Register, offset: 0x4 */
  __IO uint32_t PLL_ARM_CLR;                       /**< Analog ARM PLL control Register, offset: 0x8 */
  __IO uint32_t PLL_ARM_TOG;                       /**< Analog ARM PLL control Register, offset: 0xC */
  __IO uint32_t PLL_USB1;                          /**< Analog USB1 480MHz PLL Control Register, offset: 0x10 */
  __IO uint32_t PLL_USB1_SET;                      /**< Analog USB1 480MHz PLL Control Register, offset: 0x14 */
  __IO uint32_t PLL_USB1_CLR;                      /**< Analog USB1 480MHz PLL Control Register, offset: 0x18 */
  __IO uint32_t PLL_USB1_TOG;                      /**< Analog USB1 480MHz PLL Control Register, offset: 0x1C */
  __IO uint32_t PLL_USB2;                          /**< Analog USB2 480MHz PLL Control Register, offset: 0x20 */
  __IO uint32_t PLL_USB2_SET;                      /**< Analog USB2 480MHz PLL Control Register, offset: 0x24 */
  __IO uint32_t PLL_USB2_CLR;                      /**< Analog USB2 480MHz PLL Control Register, offset: 0x28 */
  __IO uint32_t PLL_USB2_TOG;                      /**< Analog USB2 480MHz PLL Control Register, offset: 0x2C */
  __IO uint32_t PLL_SYS;                           /**< Analog System PLL Control Register, offset: 0x30 */
  __IO uint32_t PLL_SYS_SET;                       /**< Analog System PLL Control Register, offset: 0x34 */
  __IO uint32_t PLL_SYS_CLR;                       /**< Analog System PLL Control Register, offset: 0x38 */
  __IO uint32_t PLL_SYS_TOG;                       /**< Analog System PLL Control Register, offset: 0x3C */
  __IO uint32_t PLL_SYS_SS;                        /**< 528MHz System PLL Spread Spectrum Register, offset: 0x40 */
       uint8_t RESERVED_0[12];
  __IO uint32_t PLL_SYS_NUM;                       /**< Numerator of 528MHz System PLL Fractional Loop Divider Register, offset: 0x50 */
       uint8_t RESERVED_1[12];
  __IO uint32_t PLL_SYS_DENOM;                     /**< Denominator of 528MHz System PLL Fractional Loop Divider Register, offset: 0x60 */
       uint8_t RESERVED_2[12];
  __IO uint32_t PLL_AUDIO;                         /**< Analog Audio PLL control Register, offset: 0x70 */
  __IO uint32_t PLL_AUDIO_SET;                     /**< Analog Audio PLL control Register, offset: 0x74 */
  __IO uint32_t PLL_AUDIO_CLR;                     /**< Analog Audio PLL control Register, offset: 0x78 */
  __IO uint32_t PLL_AUDIO_TOG;                     /**< Analog Audio PLL control Register, offset: 0x7C */
  __IO uint32_t PLL_AUDIO_NUM;                     /**< Numerator of Audio PLL Fractional Loop Divider Register, offset: 0x80 */
       uint8_t RESERVED_3[12];
  __IO uint32_t PLL_AUDIO_DENOM;                   /**< Denominator of Audio PLL Fractional Loop Divider Register, offset: 0x90 */
       uint8_t RESERVED_4[12];
  __IO uint32_t PLL_VIDEO;                         /**< Analog Video PLL control Register, offset: 0xA0 */
  __IO uint32_t PLL_VIDEO_SET;                     /**< Analog Video PLL control Register, offset: 0xA4 */
  __IO uint32_t PLL_VIDEO_CLR;                     /**< Analog Video PLL control Register, offset: 0xA8 */
  __IO uint32_t PLL_VIDEO_TOG;                     /**< Analog Video PLL control Register, offset: 0xAC */
  __IO uint32_t PLL_VIDEO_NUM;                     /**< Numerator of Video PLL Fractional Loop Divider Register, offset: 0xB0 */
       uint8_t RESERVED_5[12];
  __IO uint32_t PLL_VIDEO_DENOM;                   /**< Denominator of Video PLL Fractional Loop Divider Register, offset: 0xC0 */
       uint8_t RESERVED_6[28];
  __IO uint32_t PLL_ENET;                          /**< Analog ENET PLL Control Register, offset: 0xE0 */
  __IO uint32_t PLL_ENET_SET;                      /**< Analog ENET PLL Control Register, offset: 0xE4 */
  __IO uint32_t PLL_ENET_CLR;                      /**< Analog ENET PLL Control Register, offset: 0xE8 */
  __IO uint32_t PLL_ENET_TOG;                      /**< Analog ENET PLL Control Register, offset: 0xEC */
  __IO uint32_t PFD_480;                           /**< 480MHz Clock (PLL3) Phase Fractional Divider Control Register, offset: 0xF0 */
  __IO uint32_t PFD_480_SET;                       /**< 480MHz Clock (PLL3) Phase Fractional Divider Control Register, offset: 0xF4 */
  __IO uint32_t PFD_480_CLR;                       /**< 480MHz Clock (PLL3) Phase Fractional Divider Control Register, offset: 0xF8 */
  __IO uint32_t PFD_480_TOG;                       /**< 480MHz Clock (PLL3) Phase Fractional Divider Control Register, offset: 0xFC */
  __IO uint32_t PFD_528;                           /**< 528MHz Clock (PLL2) Phase Fractional Divider Control Register, offset: 0x100 */
  __IO uint32_t PFD_528_SET;                       /**< 528MHz Clock (PLL2) Phase Fractional Divider Control Register, offset: 0x104 */
  __IO uint32_t PFD_528_CLR;                       /**< 528MHz Clock (PLL2) Phase Fractional Divider Control Register, offset: 0x108 */
  __IO uint32_t PFD_528_TOG;                       /**< 528MHz Clock (PLL2) Phase Fractional Divider Control Register, offset: 0x10C */
       uint8_t RESERVED_7[64];
  __IO uint32_t MISC0;                             /**< Miscellaneous Register 0, offset: 0x150 */
  __IO uint32_t MISC0_SET;                         /**< Miscellaneous Register 0, offset: 0x154 */
  __IO uint32_t MISC0_CLR;                         /**< Miscellaneous Register 0, offset: 0x158 */
  __IO uint32_t MISC0_TOG;                         /**< Miscellaneous Register 0, offset: 0x15C */
  __IO uint32_t MISC1;                             /**< Miscellaneous Register 1, offset: 0x160 */
  __IO uint32_t MISC1_SET;                         /**< Miscellaneous Register 1, offset: 0x164 */
  __IO uint32_t MISC1_CLR;                         /**< Miscellaneous Register 1, offset: 0x168 */
  __IO uint32_t MISC1_TOG;                         /**< Miscellaneous Register 1, offset: 0x16C */
  __IO uint32_t MISC2;                             /**< Miscellaneous Register 2, offset: 0x170 */
  __IO uint32_t MISC2_SET;                         /**< Miscellaneous Register 2, offset: 0x174 */
  __IO uint32_t MISC2_CLR;                         /**< Miscellaneous Register 2, offset: 0x178 */
  __IO uint32_t MISC2_TOG;                         /**< Miscellaneous Register 2, offset: 0x17C */
} CCM_ANALOG_Type;

/* CCM_ANALOG - Peripheral instance base addresses */
/** Peripheral CCM_ANALOG base address */
#define CCM_ANALOG_BASE                          (0x20C8000u)
/** Peripheral CCM_ANALOG base pointer */
#define CCM_ANALOG                               ((CCM_ANALOG_Type *)CCM_ANALOG_BASE)
/** Array initializer of CCM_ANALOG peripheral base addresses */
#define CCM_ANALOG_BASE_ADDRS                    { CCM_ANALOG_BASE }
/** Array initializer of CCM_ANALOG peripheral base pointers */
#define CCM_ANALOG_BASE_PTRS                     { CCM_ANALOG }

/** IOMUXC - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[68];
  __IO uint32_t SW_MUX_CTL_PAD[112];               /**< SW_MUX_CTL_PAD_JTAG_MOD SW MUX Control Register..SW_MUX_CTL_PAD_CSI_DATA07 SW MUX Control Register, array offset: 0x44, array step: 0x4 */
  __IO uint32_t SW_PAD_CTL_PAD_DDR[34];            /**< SW_PAD_CTL_PAD_DRAM_ADDR00 SW PAD Control Register..SW_PAD_CTL_PAD_DRAM_RESET SW PAD Control Register, array offset: 0x204, array step: 0x4 */
       uint8_t RESERVED_1[68];
  __IO uint32_t SW_PAD_CTL_PAD[112];               /**< SW_PAD_CTL_PAD_JTAG_MOD SW PAD Control Register..SW_PAD_CTL_PAD_CSI_DATA07 SW PAD Control Register, array offset: 0x2D0, array step: 0x4 */
  __IO uint32_t SW_PAD_CTL_GRP[10];                /**< SW_PAD_CTL_GRP_ADDDS SW GRP Register..SW_PAD_CTL_GRP_DDR_TYPE SW GRP Register, array offset: 0x490, array step: 0x4 */
  __IO uint32_t SELECT_INPUT[122];                 /**< USB_OTG1_ID_SELECT_INPUT DAISY Register..USDHC2_WP_SELECT_INPUT DAISY Register, array offset: 0x4B8, array step: 0x4 */
} IOMUXC_Type;

/* IOMUXC - Peripheral instance base addresses */
/** Peripheral IOMUXC base address */
#define IOMUXC_BASE                              (0x20E0000u)
/** Peripheral IOMUXC base pointer */
#define IOMUXC                                   ((IOMUXC_Type *)IOMUXC_BASE)

/*******************************************************************************
 * Definitions
*******************************************************************************/

/*!
 * @brief Enumeration for the IOMUXC SW_MUX_CTL_PAD
 *
 * Defines the enumeration for the IOMUXC SW_MUX_CTL_PAD collections.
 */
typedef enum _iomuxc_sw_mux_ctl_pad
{
    kIOMUXC_SW_MUX_CTL_PAD_JTAG_MOD = 0U,          /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_JTAG_TMS = 1U,          /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_JTAG_TDO = 2U,          /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_JTAG_TDI = 3U,          /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_JTAG_TCK = 4U,          /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_JTAG_TRST_B = 5U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO00 = 6U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO01 = 7U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO02 = 8U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO03 = 9U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO04 = 10U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO05 = 11U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO06 = 12U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO07 = 13U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO08 = 14U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO09 = 15U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART1_TX_DATA = 16U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART1_RX_DATA = 17U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART1_CTS_B = 18U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART1_RTS_B = 19U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART2_TX_DATA = 20U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART2_RX_DATA = 21U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART2_CTS_B = 22U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART2_RTS_B = 23U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART3_TX_DATA = 24U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART3_RX_DATA = 25U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART3_CTS_B = 26U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART3_RTS_B = 27U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART4_TX_DATA = 28U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART4_RX_DATA = 29U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART5_TX_DATA = 30U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART5_RX_DATA = 31U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET1_RX_DATA0 = 32U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET1_RX_DATA1 = 33U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET1_RX_EN = 34U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET1_TX_DATA0 = 35U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET1_TX_DATA1 = 36U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET1_TX_EN = 37U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET1_TX_CLK = 38U,     /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET1_RX_ER = 39U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET2_RX_DATA0 = 40U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET2_RX_DATA1 = 41U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET2_RX_EN = 42U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET2_TX_DATA0 = 43U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET2_TX_DATA1 = 44U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET2_TX_EN = 45U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET2_TX_CLK = 46U,     /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET2_RX_ER = 47U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_CLK  = 48U,         /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_ENABLE = 49U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_HSYNC = 50U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_VSYNC = 51U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_RESET = 52U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA00 = 53U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA01 = 54U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA02 = 55U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA03 = 56U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA04 = 57U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA05 = 58U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA06 = 59U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA07 = 60U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA08 = 61U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA09 = 62U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA10 = 63U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA11 = 64U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA12 = 65U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA13 = 66U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA14 = 67U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA15 = 68U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA16 = 69U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA17 = 70U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA18 = 71U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA19 = 72U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA20 = 73U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA21 = 74U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA22 = 75U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA23 = 76U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_RE_B = 77U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_WE_B = 78U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DATA00 = 79U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DATA01 = 80U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DATA02 = 81U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DATA03 = 82U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DATA04 = 83U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DATA05 = 84U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DATA06 = 85U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DATA07 = 86U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_ALE = 87U,         /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_WP_B = 88U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_READY_B = 89U,     /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_CE0_B = 90U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_CE1_B = 91U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_CLE = 92U,         /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DQS = 93U,         /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_SD1_CMD  = 94U,         /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_SD1_CLK  = 95U,         /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_SD1_DATA0 = 96U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_SD1_DATA1 = 97U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_SD1_DATA2 = 98U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_SD1_DATA3 = 99U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_MCLK = 100U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_PIXCLK = 101U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_VSYNC = 102U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_HSYNC = 103U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_DATA00 = 104U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_DATA01 = 105U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_DATA02 = 106U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_DATA03 = 107U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_DATA04 = 108U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_DATA05 = 109U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_DATA06 = 110U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_DATA07 = 111U,      /**< IOMUXC SW_MUX_CTL_PAD index */
} iomuxc_sw_mux_ctl_pad_t;

/*!
 * @addtogroup iomuxc_pads
 * @{ */

/*******************************************************************************
 * Definitions
*******************************************************************************/

/*!
 * @brief Enumeration for the IOMUXC SW_PAD_CTL_PAD_DDR
 *
 * Defines the enumeration for the IOMUXC SW_PAD_CTL_PAD_DDR collections.
 */
typedef enum _iomuxc_sw_pad_ctl_pad_ddr
{
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR00 = 0U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR01 = 1U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR02 = 2U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR03 = 3U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR04 = 4U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR05 = 5U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR06 = 6U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR07 = 7U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR08 = 8U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR09 = 9U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR10 = 10U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR11 = 11U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR12 = 12U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR13 = 13U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR14 = 14U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR15 = 15U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_DQM0 = 16U,        /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_DQM1 = 17U,        /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_RAS_B = 18U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_CAS_B = 19U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_CS0_B = 20U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_CS1_B = 21U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDWE_B = 22U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ODT0 = 23U,        /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ODT1 = 24U,        /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDBA0 = 25U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDBA1 = 26U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDBA2 = 27U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDCKE0 = 28U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDCKE1 = 29U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDCLK0_P = 30U,    /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS0_P = 31U,     /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS1_P = 32U,     /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_RESET = 33U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
} iomuxc_sw_pad_ctl_pad_ddr_t;

/*!
 * @addtogroup iomuxc_pads
 * @{ */

/*******************************************************************************
 * Definitions
*******************************************************************************/

/*!
 * @brief Enumeration for the IOMUXC SW_PAD_CTL_PAD
 *
 * Defines the enumeration for the IOMUXC SW_PAD_CTL_PAD collections.
 */
typedef enum _iomuxc_sw_pad_ctl_pad
{
    kIOMUXC_SW_PAD_CTL_PAD_JTAG_MOD = 0U,          /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_JTAG_TMS = 1U,          /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_JTAG_TDO = 2U,          /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_JTAG_TDI = 3U,          /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_JTAG_TCK = 4U,          /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_JTAG_TRST_B = 5U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO00 = 6U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO01 = 7U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO02 = 8U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO03 = 9U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO04 = 10U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO05 = 11U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO06 = 12U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO07 = 13U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO08 = 14U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO09 = 15U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART1_TX_DATA = 16U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART1_RX_DATA = 17U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART1_CTS_B = 18U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART1_RTS_B = 19U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART2_TX_DATA = 20U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART2_RX_DATA = 21U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART2_CTS_B = 22U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART2_RTS_B = 23U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART3_TX_DATA = 24U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART3_RX_DATA = 25U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART3_CTS_B = 26U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART3_RTS_B = 27U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART4_TX_DATA = 28U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART4_RX_DATA = 29U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART5_TX_DATA = 30U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART5_RX_DATA = 31U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET1_RX_DATA0 = 32U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET1_RX_DATA1 = 33U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET1_RX_EN = 34U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET1_TX_DATA0 = 35U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET1_TX_DATA1 = 36U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET1_TX_EN = 37U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET1_TX_CLK = 38U,     /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET1_RX_ER = 39U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET2_RX_DATA0 = 40U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET2_RX_DATA1 = 41U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET2_RX_EN = 42U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET2_TX_DATA0 = 43U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET2_TX_DATA1 = 44U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET2_TX_EN = 45U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET2_TX_CLK = 46U,     /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET2_RX_ER = 47U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_CLK  = 48U,         /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_ENABLE = 49U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_HSYNC = 50U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_VSYNC = 51U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_RESET = 52U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA00 = 53U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA01 = 54U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA02 = 55U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA03 = 56U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA04 = 57U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA05 = 58U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA06 = 59U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA07 = 60U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA08 = 61U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA09 = 62U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA10 = 63U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA11 = 64U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA12 = 65U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA13 = 66U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA14 = 67U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA15 = 68U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA16 = 69U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA17 = 70U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA18 = 71U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA19 = 72U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA20 = 73U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA21 = 74U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA22 = 75U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA23 = 76U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_RE_B = 77U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_WE_B = 78U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DATA00 = 79U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DATA01 = 80U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DATA02 = 81U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DATA03 = 82U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DATA04 = 83U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DATA05 = 84U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DATA06 = 85U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DATA07 = 86U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_ALE = 87U,         /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_WP_B = 88U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_READY_B = 89U,     /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_CE0_B = 90U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_CE1_B = 91U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_CLE = 92U,         /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DQS = 93U,         /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_SD1_CMD  = 94U,         /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_SD1_CLK  = 95U,         /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_SD1_DATA0 = 96U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_SD1_DATA1 = 97U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_SD1_DATA2 = 98U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_SD1_DATA3 = 99U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_MCLK = 100U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_PIXCLK = 101U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_VSYNC = 102U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_HSYNC = 103U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_DATA00 = 104U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_DATA01 = 105U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_DATA02 = 106U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_DATA03 = 107U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_DATA04 = 108U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_DATA05 = 109U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_DATA06 = 110U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_DATA07 = 111U,      /**< IOMUXC SW_PAD_CTL_PAD index */
} iomuxc_sw_pad_ctl_pad_t;

/*!
 * @brief Enumeration for the IOMUXC select input
 *
 * Defines the enumeration for the IOMUXC select input collections.
 */
typedef enum _iomuxc_select_input
{
    kIOMUXC_ANATOP_USB_OTG_ID_SELECT_INPUT = 0U,   /**< IOMUXC select input index */
    kIOMUXC_USB_OTG2_ID_SELECT_INPUT = 1U,         /**< IOMUXC select input index */
    kIOMUXC_CCM_PMIC_READY_SELECT_INPUT = 2U,      /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA02_SELECT_INPUT = 3U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA03_SELECT_INPUT = 4U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA05_SELECT_INPUT = 5U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA00_SELECT_INPUT = 6U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA01_SELECT_INPUT = 7U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA04_SELECT_INPUT = 8U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA06_SELECT_INPUT = 9U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA07_SELECT_INPUT = 10U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA08_SELECT_INPUT = 11U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA09_SELECT_INPUT = 12U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA10_SELECT_INPUT = 13U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA11_SELECT_INPUT = 14U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA12_SELECT_INPUT = 15U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA13_SELECT_INPUT = 16U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA14_SELECT_INPUT = 17U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA15_SELECT_INPUT = 18U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA16_SELECT_INPUT = 19U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA17_SELECT_INPUT = 20U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA18_SELECT_INPUT = 21U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA19_SELECT_INPUT = 22U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA20_SELECT_INPUT = 23U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA21_SELECT_INPUT = 24U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA22_SELECT_INPUT = 25U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA23_SELECT_INPUT = 26U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_HSYNC_SELECT_INPUT  = 27U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_PIXCLK_SELECT_INPUT = 28U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_VSYNC_SELECT_INPUT  = 29U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_FIELD_SELECT_INPUT  = 30U,         /**< IOMUXC select input index */
    kIOMUXC_ECSPI1_SCLK_SELECT_INPUT = 31U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI1_MISO_SELECT_INPUT = 32U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI1_MOSI_SELECT_INPUT = 33U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI1_SS0_B_SELECT_INPUT = 34U,       /**< IOMUXC select input index */
    kIOMUXC_ECSPI2_SCLK_SELECT_INPUT = 35U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI2_MISO_SELECT_INPUT = 36U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI2_MOSI_SELECT_INPUT = 37U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI2_SS0_B_SELECT_INPUT = 38U,       /**< IOMUXC select input index */
    kIOMUXC_ECSPI3_SCLK_SELECT_INPUT = 39U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI3_MISO_SELECT_INPUT = 40U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI3_MOSI_SELECT_INPUT = 41U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI3_SS0_B_SELECT_INPUT = 42U,       /**< IOMUXC select input index */
    kIOMUXC_ECSPI4_SCLK_SELECT_INPUT = 43U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI4_MISO_SELECT_INPUT = 44U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI4_MOSI_SELECT_INPUT = 45U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI4_SS0_B_SELECT_INPUT = 46U,       /**< IOMUXC select input index */
    kIOMUXC_ENET1_REF_CLK1_SELECT_INPUT = 47U,     /**< IOMUXC select input index */
    kIOMUXC_ENET1_MAC0_MDIO_SELECT_INPUT = 48U,    /**< IOMUXC select input index */
    kIOMUXC_ENET2_REF_CLK2_SELECT_INPUT = 49U,     /**< IOMUXC select input index */
    kIOMUXC_ENET2_MAC0_MDIO_SELECT_INPUT = 50U,    /**< IOMUXC select input index */
    kIOMUXC_FLEXCAN1_RX_SELECT_INPUT = 51U,        /**< IOMUXC select input index */
    kIOMUXC_FLEXCAN2_RX_SELECT_INPUT = 52U,        /**< IOMUXC select input index */
    kIOMUXC_GPT1_CAPTURE1_SELECT_INPUT = 53U,      /**< IOMUXC select input index */
    kIOMUXC_GPT1_CAPTURE2_SELECT_INPUT = 54U,      /**< IOMUXC select input index */
    kIOMUXC_GPT1_CLK_SELECT_INPUT   = 55U,         /**< IOMUXC select input index */
    kIOMUXC_GPT2_CAPTURE1_SELECT_INPUT = 56U,      /**< IOMUXC select input index */
    kIOMUXC_GPT2_CAPTURE2_SELECT_INPUT = 57U,      /**< IOMUXC select input index */
    kIOMUXC_GPT2_CLK_SELECT_INPUT   = 58U,         /**< IOMUXC select input index */
    kIOMUXC_I2C1_SCL_SELECT_INPUT   = 59U,         /**< IOMUXC select input index */
    kIOMUXC_I2C1_SDA_SELECT_INPUT   = 60U,         /**< IOMUXC select input index */
    kIOMUXC_I2C2_SCL_SELECT_INPUT   = 61U,         /**< IOMUXC select input index */
    kIOMUXC_I2C2_SDA_SELECT_INPUT   = 62U,         /**< IOMUXC select input index */
    kIOMUXC_I2C3_SCL_SELECT_INPUT   = 63U,         /**< IOMUXC select input index */
    kIOMUXC_I2C3_SDA_SELECT_INPUT   = 64U,         /**< IOMUXC select input index */
    kIOMUXC_I2C4_SCL_SELECT_INPUT   = 65U,         /**< IOMUXC select input index */
    kIOMUXC_I2C4_SDA_SELECT_INPUT   = 66U,         /**< IOMUXC select input index */
    kIOMUXC_KPP_COL0_SELECT_INPUT   = 67U,         /**< IOMUXC select input index */
    kIOMUXC_KPP_COL1_SELECT_INPUT   = 68U,         /**< IOMUXC select input index */
    kIOMUXC_KPP_COL2_SELECT_INPUT   = 69U,         /**< IOMUXC select input index */
    kIOMUXC_KPP_ROW0_SELECT_INPUT   = 70U,         /**< IOMUXC select input index */
    kIOMUXC_KPP_ROW1_SELECT_INPUT   = 71U,         /**< IOMUXC select input index */
    kIOMUXC_KPP_ROW2_SELECT_INPUT   = 72U,         /**< IOMUXC select input index */
    kIOMUXC_LCD_BUSY_SELECT_INPUT   = 73U,         /**< IOMUXC select input index */
    kIOMUXC_SAI1_MCLK_SELECT_INPUT  = 74U,         /**< IOMUXC select input index */
    kIOMUXC_SAI1_RX_DATA_SELECT_INPUT = 75U,       /**< IOMUXC select input index */
    kIOMUXC_SAI1_TX_BCLK_SELECT_INPUT = 76U,       /**< IOMUXC select input index */
    kIOMUXC_SAI1_TX_SYNC_SELECT_INPUT = 77U,       /**< IOMUXC select input index */
    kIOMUXC_SAI2_MCLK_SELECT_INPUT  = 78U,         /**< IOMUXC select input index */
    kIOMUXC_SAI2_RX_DATA_SELECT_INPUT = 79U,       /**< IOMUXC select input index */
    kIOMUXC_SAI2_TX_BCLK_SELECT_INPUT = 80U,       /**< IOMUXC select input index */
    kIOMUXC_SAI2_TX_SYNC_SELECT_INPUT = 81U,       /**< IOMUXC select input index */
    kIOMUXC_SAI3_MCLK_SELECT_INPUT  = 82U,         /**< IOMUXC select input index */
    kIOMUXC_SAI3_RX_DATA_SELECT_INPUT = 83U,       /**< IOMUXC select input index */
    kIOMUXC_SAI3_TX_BCLK_SELECT_INPUT = 84U,       /**< IOMUXC select input index */
    kIOMUXC_SAI3_TX_SYNC_SELECT_INPUT = 85U,       /**< IOMUXC select input index */
    kIOMUXC_SDMA_EVENTS0_SELECT_INPUT = 86U,       /**< IOMUXC select input index */
    kIOMUXC_SDMA_EVENTS1_SELECT_INPUT = 87U,       /**< IOMUXC select input index */
    kIOMUXC_SPDIF_IN_SELECT_INPUT   = 88U,         /**< IOMUXC select input index */
    kIOMUXC_SPDIF_EXT_CLK_SELECT_INPUT = 89U,      /**< IOMUXC select input index */
    kIOMUXC_UART1_RTS_B_SELECT_INPUT = 90U,        /**< IOMUXC select input index */
    kIOMUXC_UART1_RX_DATA_SELECT_INPUT = 91U,      /**< IOMUXC select input index */
    kIOMUXC_UART2_RTS_B_SELECT_INPUT = 92U,        /**< IOMUXC select input index */
    kIOMUXC_UART2_RX_DATA_SELECT_INPUT = 93U,      /**< IOMUXC select input index */
    kIOMUXC_UART3_RTS_B_SELECT_INPUT = 94U,        /**< IOMUXC select input index */
    kIOMUXC_UART3_RX_DATA_SELECT_INPUT = 95U,      /**< IOMUXC select input index */
    kIOMUXC_UART4_RTS_B_SELECT_INPUT = 96U,        /**< IOMUXC select input index */
    kIOMUXC_UART4_RX_DATA_SELECT_INPUT = 97U,      /**< IOMUXC select input index */
    kIOMUXC_UART5_RTS_B_SELECT_INPUT = 98U,        /**< IOMUXC select input index */
    kIOMUXC_UART5_RX_DATA_SELECT_INPUT = 99U,      /**< IOMUXC select input index */
    kIOMUXC_UART6_RTS_B_SELECT_INPUT = 100U,       /**< IOMUXC select input index */
    kIOMUXC_UART6_RX_DATA_SELECT_INPUT = 101U,     /**< IOMUXC select input index */
    kIOMUXC_UART7_RTS_B_SELECT_INPUT = 102U,       /**< IOMUXC select input index */
    kIOMUXC_UART7_RX_DATA_SELECT_INPUT = 103U,     /**< IOMUXC select input index */
    kIOMUXC_UART8_RTS_B_SELECT_INPUT = 104U,       /**< IOMUXC select input index */
    kIOMUXC_UART8_RX_DATA_SELECT_INPUT = 105U,     /**< IOMUXC select input index */
    kIOMUXC_USB_OTG2_OC_SELECT_INPUT = 106U,       /**< IOMUXC select input index */
    kIOMUXC_USB_OTG_OC_SELECT_INPUT = 107U,        /**< IOMUXC select input index */
    kIOMUXC_USDHC1_CD_B_SELECT_INPUT = 108U,       /**< IOMUXC select input index */
    kIOMUXC_USDHC1_WP_SELECT_INPUT  = 109U,        /**< IOMUXC select input index */
    kIOMUXC_USDHC2_CLK_SELECT_INPUT = 110U,        /**< IOMUXC select input index */
    kIOMUXC_USDHC2_CD_B_SELECT_INPUT = 111U,       /**< IOMUXC select input index */
    kIOMUXC_USDHC2_CMD_SELECT_INPUT = 112U,        /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA0_SELECT_INPUT = 113U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA1_SELECT_INPUT = 114U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA2_SELECT_INPUT = 115U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA3_SELECT_INPUT = 116U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA4_SELECT_INPUT = 117U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA5_SELECT_INPUT = 118U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA6_SELECT_INPUT = 119U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA7_SELECT_INPUT = 120U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_WP_SELECT_INPUT  = 121U,        /**< IOMUXC select input index */
} iomuxc_select_input_t;

/* @} */

/*!
 * @brief Enumeration for the IOMUXC group
 *
 * Defines the enumeration for the IOMUXC group collections.
 */
typedef enum _iomuxc_grp
{
    kIOMUXC_SW_PAD_CTL_GRP_ADDDS    = 0U,          /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_DDRMODE_CTL = 1U,       /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_B0DS     = 2U,          /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_DDRPK    = 3U,          /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_CTLDS    = 4U,          /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_B1DS     = 5U,          /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_DDRHYS   = 6U,          /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_DDRPKE   = 7U,          /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_DDRMODE  = 8U,          /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_DDR_TYPE = 9U,          /**< IOMUXC group index */
} iomuxc_grp_t;

/* @} */

/*!
 * @addtogroup iomuxc_snvs_pads
 * @{ */

/*******************************************************************************
 * Definitions
*******************************************************************************/

/*!
 * @brief Enumeration for the IOMUXC_SNVS SW_MUX_CTL_PAD
 *
 * Defines the enumeration for the IOMUXC_SNVS SW_MUX_CTL_PAD collections.
 */
typedef enum _iomuxc_snvs_sw_mux_ctl_pad
{
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_BOOT_MODE0 = 0U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_BOOT_MODE1 = 1U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER0 = 2U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER1 = 3U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER2 = 4U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER3 = 5U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER4 = 6U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER5 = 7U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER6 = 8U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER7 = 9U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER8 = 10U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER9 = 11U, /**< IOMUXC SW_MUX_CTL_PAD index */
} iomuxc_snvs_sw_mux_ctl_pad_t;

/*!
 * @addtogroup iomuxc_snvs_pads
 * @{ */

/*******************************************************************************
 * Definitions
*******************************************************************************/

/*!
 * @brief Enumeration for the IOMUXC_SNVS SW_PAD_CTL_PAD
 *
 * Defines the enumeration for the IOMUXC_SNVS SW_PAD_CTL_PAD collections.
 */
typedef enum _iomuxc_snvs_sw_pad_ctl_pad
{
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_TEST_MODE = 0U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_POR_B = 1U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_ONOFF = 2U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_PMIC_ON_REQ = 3U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_CCM_PMIC_STBY_REQ = 4U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_BOOT_MODE0 = 5U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_BOOT_MODE1 = 6U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER0 = 7U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER1 = 8U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER2 = 9U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER3 = 10U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER4 = 11U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER5 = 12U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER6 = 13U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER7 = 14U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER8 = 15U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER9 = 16U, /**< IOMUXC SW_PAD_CTL_PAD index */
} iomuxc_snvs_sw_pad_ctl_pad_t;


/*!
 * @}
 */ /* end of group Mapping_Information */

/** GPIO - Register Layout Typedef */
typedef struct {
  __IO uint32_t DR;                                /**< GPIO data register, offset: 0x0 */
  __IO uint32_t GDIR;                              /**< GPIO direction register, offset: 0x4 */
  __I  uint32_t PSR;                               /**< GPIO pad status register, offset: 0x8 */
  __IO uint32_t ICR1;                              /**< GPIO interrupt configuration register1, offset: 0xC */
  __IO uint32_t ICR2;                              /**< GPIO interrupt configuration register2, offset: 0x10 */
  __IO uint32_t IMR;                               /**< GPIO interrupt mask register, offset: 0x14 */
  __IO uint32_t ISR;                               /**< GPIO interrupt status register, offset: 0x18 */
  __IO uint32_t EDGE_SEL;                          /**< GPIO edge select register, offset: 0x1C */
} GPIO_Type;

/* GPIO - Peripheral instance base addresses */
/** Peripheral GPIO1 base address */
#define GPIO1_BASE                               (0x209C000u)
/** Peripheral GPIO1 base pointer */
#define GPIO1                                    ((GPIO_Type *)GPIO1_BASE)
/** Peripheral GPIO2 base address */
#define GPIO2_BASE                               (0x20A0000u)
/** Peripheral GPIO2 base pointer */
#define GPIO2                                    ((GPIO_Type *)GPIO2_BASE)
/** Peripheral GPIO3 base address */
#define GPIO3_BASE                               (0x20A4000u)
/** Peripheral GPIO3 base pointer */
#define GPIO3                                    ((GPIO_Type *)GPIO3_BASE)
/** Peripheral GPIO4 base address */
#define GPIO4_BASE                               (0x20A8000u)
/** Peripheral GPIO4 base pointer */
#define GPIO4                                    ((GPIO_Type *)GPIO4_BASE)
/** Peripheral GPIO5 base address */
#define GPIO5_BASE                               (0x20AC000u)
/** Peripheral GPIO5 base pointer */
#define GPIO5                                    ((GPIO_Type *)GPIO5_BASE)
/** Array initializer of GPIO peripheral base addresses */
#define GPIO_BASE_ADDRS                          { 0u, GPIO1_BASE, GPIO2_BASE, GPIO3_BASE, GPIO4_BASE, GPIO5_BASE }
/** Array initializer of GPIO peripheral base pointers */
#define GPIO_BASE_PTRS                           { (GPIO_Type *)0u, GPIO1, GPIO2, GPIO3, GPIO4, GPIO5 }
/** Interrupt vectors for the GPIO peripheral type */
#define GPIO_IRQS                                { NotAvail_IRQn, GPIO1_INT0_IRQn, GPIO1_INT1_IRQn, GPIO1_INT2_IRQn, GPIO1_INT3_IRQn, GPIO1_INT4_IRQn, GPIO1_INT5_IRQn, GPIO1_INT6_IRQn, GPIO1_INT7_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn }
#define GPIO_COMBINED_IRQS                       { NotAvail_IRQn, GPIO1_Combined_0_15_IRQn, GPIO1_Combined_16_31_IRQn, GPIO2_Combined_0_15_IRQn, GPIO2_Combined_16_31_IRQn, GPIO3_Combined_0_15_IRQn, GPIO3_Combined_16_31_IRQn, GPIO4_Combined_0_15_IRQn, GPIO4_Combined_16_31_IRQn, GPIO5_Combined_0_15_IRQn, GPIO5_Combined_16_31_IRQn }


#endif // _TYPE_H