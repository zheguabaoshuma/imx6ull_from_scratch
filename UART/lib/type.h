#ifndef _TYPE_H
#define _TYPE_H

#define __I volatile const
#define __O volatile
#define __IO volatile
#define __IM volatile const      /*! Defines 'read only' structure member permissions */
#define __OM volatile            /*! Defines 'write only' structure member permissions */
#define __IOM volatile            /*! Defines 'read / write' structure member permissions */

#define NULL 0

#define FORCEDINLINE __attribute__((always_inline))
#define __STATIC_INLINE static inline

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

typedef unsigned char size_t;
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

/*! @brief GPIO direction definition. */
typedef enum _gpio_pin_direction
{
    kGPIO_DigitalInput  = 0U, /*!< Set current pin as digital input.*/
    kGPIO_DigitalOutput = 1U, /*!< Set current pin as digital output.*/
} gpio_pin_direction_t;

/*! @brief GPIO interrupt mode definition. */
typedef enum _gpio_interrupt_mode
{
    kGPIO_NoIntmode = 0U, /*!< Set current pin general IO functionality.*/
    kGPIO_IntLowLevel = 1U, /*!< Set current pin interrupt is low-level sensitive.*/
    kGPIO_IntHighLevel = 2U, /*!< Set current pin interrupt is high-level sensitive.*/
    kGPIO_IntRisingEdge = 3U, /*!< Set current pin interrupt is rising-edge sensitive.*/
    kGPIO_IntFallingEdge = 4U, /*!< Set current pin interrupt is falling-edge sensitive.*/
    kGPIO_IntRisingOrFallingEdge = 5U, /*!< Enable the edge select bit to override the ICR register's configuration.*/
} gpio_interrupt_mode_t;

/*! @brief GPIO Init structure definition. */
typedef struct _gpio_pin_config
{
    gpio_pin_direction_t  direction;     /*!< Specifies the pin direction. */
    uint8_t outputLogic; /*!< Set a default output logic, which has no use in input */
    gpio_interrupt_mode_t interruptMode; /*!< Specifies the pin interrupt mode, a value of @ref gpio_interrupt_mode_t. */
} gpio_pin_config_t;


/* ----------------------------------------------------------------------------
   -- Interrupt vector numbers
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Interrupt_vector_numbers Interrupt vector numbers
 * @{
 */

/** Interrupt Number Definitions */
#define NUMBER_OF_INT_VECTORS 160                /**< Number of interrupts in the Vector table */

typedef enum IRQn {
  /* Auxiliary constants */
  NotAvail_IRQn                = -128,             /**< Not available device specific interrupt */

  /* Core interrupts */
  Software0_IRQn               = 0,                /**< Cortex-A7 Software Generated Interrupt 0 */
  Software1_IRQn               = 1,                /**< Cortex-A7 Software Generated Interrupt 1 */
  Software2_IRQn               = 2,                /**< Cortex-A7 Software Generated Interrupt 2 */
  Software3_IRQn               = 3,                /**< Cortex-A7 Software Generated Interrupt 3 */
  Software4_IRQn               = 4,                /**< Cortex-A7 Software Generated Interrupt 4 */
  Software5_IRQn               = 5,                /**< Cortex-A7 Software Generated Interrupt 5 */
  Software6_IRQn               = 6,                /**< Cortex-A7 Software Generated Interrupt 6 */
  Software7_IRQn               = 7,                /**< Cortex-A7 Software Generated Interrupt 7 */
  Software8_IRQn               = 8,                /**< Cortex-A7 Software Generated Interrupt 8 */
  Software9_IRQn               = 9,                /**< Cortex-A7 Software Generated Interrupt 9 */
  Software10_IRQn              = 10,               /**< Cortex-A7 Software Generated Interrupt 10 */
  Software11_IRQn              = 11,               /**< Cortex-A7 Software Generated Interrupt 11 */
  Software12_IRQn              = 12,               /**< Cortex-A7 Software Generated Interrupt 12 */
  Software13_IRQn              = 13,               /**< Cortex-A7 Software Generated Interrupt 13 */
  Software14_IRQn              = 14,               /**< Cortex-A7 Software Generated Interrupt 14 */
  Software15_IRQn              = 15,               /**< Cortex-A7 Software Generated Interrupt 15 */
  VirtualMaintenance_IRQn      = 25,               /**< Cortex-A7 Virtual Maintenance Interrupt */
  HypervisorTimer_IRQn         = 26,               /**< Cortex-A7 Hypervisor Timer Interrupt */
  VirtualTimer_IRQn            = 27,               /**< Cortex-A7 Virtual Timer Interrupt */
  LegacyFastInt_IRQn           = 28,               /**< Cortex-A7 Legacy nFIQ signal Interrupt */
  SecurePhyTimer_IRQn          = 29,               /**< Cortex-A7 Secure Physical Timer Interrupt */
  NonSecurePhyTimer_IRQn       = 30,               /**< Cortex-A7 Non-secure Physical Timer Interrupt */
  LegacyIRQ_IRQn               = 31,               /**< Cortex-A7 Legacy nIRQ Interrupt */

  /* Device specific interrupts */
  IOMUXC_IRQn                  = 32,               /**< General Purpose Register 1 from IOMUXC. Used to notify cores on exception condition while boot. */
  DAP_IRQn                     = 33,               /**< Debug Access Port interrupt request. */
  SDMA_IRQn                    = 34,               /**< SDMA interrupt request from all channels. */
  TSC_IRQn                     = 35,               /**< TSC interrupt. */
  SNVS_IRQn                    = 36,               /**< Logic OR of SNVS_LP and SNVS_HP interrupts. */
  LCDIF_IRQn                   = 37,               /**< LCDIF sync interrupt. */
  RNGB_IRQn                    = 38,               /**< RNGB interrupt. */
  CSI_IRQn                     = 39,               /**< CMOS Sensor Interface interrupt request. */
  PXP_IRQ0_IRQn                = 40,               /**< PXP interrupt pxp_irq_0. */
  SCTR_IRQ0_IRQn               = 41,               /**< SCTR compare interrupt ipi_int[0]. */
  SCTR_IRQ1_IRQn               = 42,               /**< SCTR compare interrupt ipi_int[1]. */
  WDOG3_IRQn                   = 43,               /**< WDOG3 timer reset interrupt request. */
  Reserved44_IRQn              = 44,               /**< Reserved */
  APBH_IRQn                    = 45,               /**< DMA Logical OR of APBH DMA channels 0-3 completion and error interrupts. */
  WEIM_IRQn                    = 46,               /**< WEIM interrupt request. */
  RAWNAND_BCH_IRQn             = 47,               /**< BCH operation complete interrupt. */
  RAWNAND_GPMI_IRQn            = 48,               /**< GPMI operation timeout error interrupt. */
  UART6_IRQn                   = 49,               /**< UART6 interrupt request. */
  PXP_IRQ1_IRQn                = 50,               /**< PXP interrupt pxp_irq_1. */
  SNVS_Consolidated_IRQn       = 51,               /**< SNVS consolidated interrupt. */
  SNVS_Security_IRQn           = 52,               /**< SNVS security interrupt. */
  CSU_IRQn                     = 53,               /**< CSU interrupt request 1. Indicates to the processor that one or more alarm inputs were asserted. */
  USDHC1_IRQn                  = 54,               /**< USDHC1 (Enhanced SDHC) interrupt request. */
  USDHC2_IRQn                  = 55,               /**< USDHC2 (Enhanced SDHC) interrupt request. */
  SAI3_RX_IRQn                 = 56,               /**< SAI3 interrupt ipi_int_sai_rx. */
  SAI3_TX_IRQn                 = 57,               /**< SAI3 interrupt ipi_int_sai_tx. */
  UART1_IRQn                   = 58,               /**< UART1 interrupt request. */
  UART2_IRQn                   = 59,               /**< UART2 interrupt request. */
  UART3_IRQn                   = 60,               /**< UART3 interrupt request. */
  UART4_IRQn                   = 61,               /**< UART4 interrupt request. */
  UART5_IRQn                   = 62,               /**< UART5 interrupt request. */
  eCSPI1_IRQn                  = 63,               /**< eCSPI1 interrupt request. */
  eCSPI2_IRQn                  = 64,               /**< eCSPI2 interrupt request. */
  eCSPI3_IRQn                  = 65,               /**< eCSPI3 interrupt request. */
  eCSPI4_IRQn                  = 66,               /**< eCSPI4 interrupt request. */
  I2C4_IRQn                    = 67,               /**< I2C4 interrupt request. */
  I2C1_IRQn                    = 68,               /**< I2C1 interrupt request. */
  I2C2_IRQn                    = 69,               /**< I2C2 interrupt request. */
  I2C3_IRQn                    = 70,               /**< I2C3 interrupt request. */
  UART7_IRQn                   = 71,               /**< UART-7 ORed interrupt. */
  UART8_IRQn                   = 72,               /**< UART-8 ORed interrupt. */
  Reserved73_IRQn              = 73,               /**< Reserved */
  USB_OTG2_IRQn                = 74,               /**< USBO2 USB OTG2 */
  USB_OTG1_IRQn                = 75,               /**< USBO2 USB OTG1 */
  USB_PHY1_IRQn                = 76,               /**< UTMI0 interrupt request. */
  USB_PHY2_IRQn                = 77,               /**< UTMI1 interrupt request. */
  DCP_IRQ_IRQn                 = 78,               /**< DCP interrupt request dcp_irq. */
  DCP_VMI_IRQ_IRQn             = 79,               /**< DCP interrupt request dcp_vmi_irq. */
  DCP_SEC_IRQ_IRQn             = 80,               /**< DCP interrupt request secure_irq. */
  TEMPMON_IRQn                 = 81,               /**< Temperature Monitor Temperature Sensor (temperature greater than threshold) interrupt request. */
  ASRC_IRQn                    = 82,               /**< ASRC interrupt request. */
  ESAI_IRQn                    = 83,               /**< ESAI interrupt request. */
  SPDIF_IRQn                   = 84,               /**< SPDIF interrupt. */
  Reserved85_IRQn              = 85,               /**< Reserved */
  PMU_IRQ1_IRQn                = 86,               /**< Brown-out event on either the 1.1, 2.5 or 3.0 regulators. */
  GPT1_IRQn                    = 87,               /**< Logical OR of GPT1 rollover interrupt line, input capture 1 and 2 lines, output compare 1, 2, and 3 interrupt lines. */
  EPIT1_IRQn                   = 88,               /**< EPIT1 output compare interrupt. */
  EPIT2_IRQn                   = 89,               /**< EPIT2 output compare interrupt. */
  GPIO1_INT7_IRQn              = 90,               /**< INT7 interrupt request. */
  GPIO1_INT6_IRQn              = 91,               /**< INT6 interrupt request. */
  GPIO1_INT5_IRQn              = 92,               /**< INT5 interrupt request. */
  GPIO1_INT4_IRQn              = 93,               /**< INT4 interrupt request. */
  GPIO1_INT3_IRQn              = 94,               /**< INT3 interrupt request. */
  GPIO1_INT2_IRQn              = 95,               /**< INT2 interrupt request. */
  GPIO1_INT1_IRQn              = 96,               /**< INT1 interrupt request. */
  GPIO1_INT0_IRQn              = 97,               /**< INT0 interrupt request. */
  GPIO1_Combined_0_15_IRQn     = 98,               /**< Combined interrupt indication for GPIO1 signals 0 - 15. */
  GPIO1_Combined_16_31_IRQn    = 99,               /**< Combined interrupt indication for GPIO1 signals 16 - 31. */
  GPIO2_Combined_0_15_IRQn     = 100,              /**< Combined interrupt indication for GPIO2 signals 0 - 15. */
  GPIO2_Combined_16_31_IRQn    = 101,              /**< Combined interrupt indication for GPIO2 signals 16 - 31. */
  GPIO3_Combined_0_15_IRQn     = 102,              /**< Combined interrupt indication for GPIO3 signals 0 - 15. */
  GPIO3_Combined_16_31_IRQn    = 103,              /**< Combined interrupt indication for GPIO3 signals 16 - 31. */
  GPIO4_Combined_0_15_IRQn     = 104,              /**< Combined interrupt indication for GPIO4 signals 0 - 15. */
  GPIO4_Combined_16_31_IRQn    = 105,              /**< Combined interrupt indication for GPIO4 signals 16 - 31. */
  GPIO5_Combined_0_15_IRQn     = 106,              /**< Combined interrupt indication for GPIO5 signals 0 - 15. */
  GPIO5_Combined_16_31_IRQn    = 107,              /**< Combined interrupt indication for GPIO5 signals 16 - 31. */
  Reserved108_IRQn             = 108,              /**< Reserved */
  Reserved109_IRQn             = 109,              /**< Reserved */
  Reserved110_IRQn             = 110,              /**< Reserved */
  Reserved111_IRQn             = 111,              /**< Reserved */
  WDOG1_IRQn                   = 112,              /**< WDOG1 timer reset interrupt request. */
  WDOG2_IRQn                   = 113,              /**< WDOG2 timer reset interrupt request. */
  KPP_IRQn                     = 114,              /**< Key Pad interrupt request. */
  PWM1_IRQn                    = 115,              /**< hasRegInstance(`PWM1`)?`Cumulative interrupt line for PWM1. Logical OR of rollover, compare, and FIFO waterlevel crossing interrupts.`:`Reserved`) */
  PWM2_IRQn                    = 116,              /**< hasRegInstance(`PWM2`)?`Cumulative interrupt line for PWM2. Logical OR of rollover, compare, and FIFO waterlevel crossing interrupts.`:`Reserved`) */
  PWM3_IRQn                    = 117,              /**< hasRegInstance(`PWM3`)?`Cumulative interrupt line for PWM3. Logical OR of rollover, compare, and FIFO waterlevel crossing interrupts.`:`Reserved`) */
  PWM4_IRQn                    = 118,              /**< hasRegInstance(`PWM4`)?`Cumulative interrupt line for PWM4. Logical OR of rollover, compare, and FIFO waterlevel crossing interrupts.`:`Reserved`) */
  CCM_IRQ1_IRQn                = 119,              /**< CCM interrupt request ipi_int_1. */
  CCM_IRQ2_IRQn                = 120,              /**< CCM interrupt request ipi_int_2. */
  GPC_IRQn                     = 121,              /**< GPC interrupt request 1. */
  Reserved122_IRQn             = 122,              /**< Reserved */
  SRC_IRQn                     = 123,              /**< SRC interrupt request src_ipi_int_1. */
  Reserved124_IRQn             = 124,              /**< Reserved */
  Reserved125_IRQn             = 125,              /**< Reserved */
  CPU_PerformanceUnit_IRQn     = 126,              /**< Performance Unit interrupt ~ipi_pmu_irq_b. */
  CPU_CTI_Trigger_IRQn         = 127,              /**< CTI trigger outputs interrupt ~ipi_cti_irq_b. */
  SRC_Combined_IRQn            = 128,              /**< Combined CPU wdog interrupts (4x) out of SRC. */
  SAI1_IRQn                    = 129,              /**< SAI1 interrupt request. */
  SAI2_IRQn                    = 130,              /**< SAI2 interrupt request. */
  Reserved131_IRQn             = 131,              /**< Reserved */
  ADC1_IRQn                    = 132,              /**< ADC1 interrupt request. */
  ADC_5HC_IRQn                 = 133,              /**< ADC_5HC interrupt request. */
  Reserved134_IRQn             = 134,              /**< Reserved */
  Reserved135_IRQn             = 135,              /**< Reserved */
  SJC_IRQn                     = 136,              /**< SJC interrupt from General Purpose register. */
  CAAM_Job_Ring0_IRQn          = 137,              /**< CAAM job ring 0 interrupt ipi_caam_irq0. */
  CAAM_Job_Ring1_IRQn          = 138,              /**< CAAM job ring 1 interrupt ipi_caam_irq1. */
  QSPI_IRQn                    = 139,              /**< QSPI1 interrupt request ipi_int_ored. */
  TZASC_IRQn                   = 140,              /**< TZASC (PL380) interrupt request. */
  GPT2_IRQn                    = 141,              /**< Logical OR of GPT2 rollover interrupt line, input capture 1 and 2 lines, output compare 1, 2 and 3 interrupt lines. */
  CAN1_IRQn                    = 142,              /**< Combined interrupt of ini_int_busoff,ini_int_error,ipi_int_mbor,ipi_int_txwarning and ipi_int_waken */
  CAN2_IRQn                    = 143,              /**< Combined interrupt of ini_int_busoff,ini_int_error,ipi_int_mbor,ipi_int_txwarning and ipi_int_waken */
  Reserved144_IRQn             = 144,              /**< Reserved */
  Reserved145_IRQn             = 145,              /**< Reserved */
  PWM5_IRQn                    = 146,              /**< Cumulative interrupt line. OR of Rollover Interrupt line, Compare Interrupt line and FIFO Waterlevel crossing interrupt line */
  PWM6_IRQn                    = 147,              /**< Cumulative interrupt line. OR of Rollover Interrupt line, Compare Interrupt line and FIFO Waterlevel crossing interrupt line */
  PWM7_IRQn                    = 148,              /**< Cumulative interrupt line. OR of Rollover Interrupt line, Compare Interrupt line and FIFO Waterlevel crossing interrupt line */
  PWM8_IRQn                    = 149,              /**< Cumulative interrupt line. OR of Rollover Interrupt line, Compare Interrupt line and FIFO Waterlevel crossing interrupt line */
  ENET1_IRQn                   = 150,              /**< ENET1 interrupt */
  ENET1_1588_IRQn              = 151,              /**< ENET1 1588 Timer interrupt [synchronous] request. */
  ENET2_IRQn                   = 152,              /**< ENET2 interrupt */
  ENET2_1588_IRQn              = 153,              /**< MAC 0 1588 Timer interrupt [synchronous] request. */
  Reserved154_IRQn             = 154,              /**< Reserved */
  Reserved155_IRQn             = 155,              /**< Reserved */
  Reserved156_IRQn             = 156,              /**< Reserved */
  Reserved157_IRQn             = 157,              /**< Reserved */
  Reserved158_IRQn             = 158,              /**< Reserved */
  PMU_IRQ2_IRQn                = 159               /**< Brown-out event on either core, gpu or soc regulators. */
} IRQn_Type;

/*!
 * @}
 */ /* end of group Interrupt_vector_numbers */


/* ----------------------------------------------------------------------------
   -- EPIT Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup EPIT_Peripheral_Access_Layer EPIT Peripheral Access Layer
 * @{
 */

/** EPIT - Register Layout Typedef */
typedef struct {
  __IO uint32_t CR;                                /**< Control register, offset: 0x0 */
  __IO uint32_t SR;                                /**< Status register, offset: 0x4 */
  __IO uint32_t LR;                                /**< Load register, offset: 0x8 */
  __IO uint32_t CMPR;                              /**< Compare register, offset: 0xC */
  __I  uint32_t CNR;                               /**< Counter register, offset: 0x10 */
} EPIT_Type;

/* ----------------------------------------------------------------------------
   -- EPIT Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup EPIT_Register_Masks EPIT Register Masks
 * @{
 */

/*! @name CR - Control register */
#define EPIT_CR_EN_MASK                          (0x1U)
#define EPIT_CR_EN_SHIFT                         (0U)
#define EPIT_CR_EN(x)                            (((uint32_t)(((uint32_t)(x)) << EPIT_CR_EN_SHIFT)) & EPIT_CR_EN_MASK)
#define EPIT_CR_ENMOD_MASK                       (0x2U)
#define EPIT_CR_ENMOD_SHIFT                      (1U)
#define EPIT_CR_ENMOD(x)                         (((uint32_t)(((uint32_t)(x)) << EPIT_CR_ENMOD_SHIFT)) & EPIT_CR_ENMOD_MASK)
#define EPIT_CR_OCIEN_MASK                       (0x4U)
#define EPIT_CR_OCIEN_SHIFT                      (2U)
#define EPIT_CR_OCIEN(x)                         (((uint32_t)(((uint32_t)(x)) << EPIT_CR_OCIEN_SHIFT)) & EPIT_CR_OCIEN_MASK)
#define EPIT_CR_RLD_MASK                         (0x8U)
#define EPIT_CR_RLD_SHIFT                        (3U)
#define EPIT_CR_RLD(x)                           (((uint32_t)(((uint32_t)(x)) << EPIT_CR_RLD_SHIFT)) & EPIT_CR_RLD_MASK)
#define EPIT_CR_PRESCALAR_MASK                   (0xFFF0U)
#define EPIT_CR_PRESCALAR_SHIFT                  (4U)
#define EPIT_CR_PRESCALAR(x)                     (((uint32_t)(((uint32_t)(x)) << EPIT_CR_PRESCALAR_SHIFT)) & EPIT_CR_PRESCALAR_MASK)
#define EPIT_CR_SWR_MASK                         (0x10000U)
#define EPIT_CR_SWR_SHIFT                        (16U)
#define EPIT_CR_SWR(x)                           (((uint32_t)(((uint32_t)(x)) << EPIT_CR_SWR_SHIFT)) & EPIT_CR_SWR_MASK)
#define EPIT_CR_IOVW_MASK                        (0x20000U)
#define EPIT_CR_IOVW_SHIFT                       (17U)
#define EPIT_CR_IOVW(x)                          (((uint32_t)(((uint32_t)(x)) << EPIT_CR_IOVW_SHIFT)) & EPIT_CR_IOVW_MASK)
#define EPIT_CR_DBGEN_MASK                       (0x40000U)
#define EPIT_CR_DBGEN_SHIFT                      (18U)
#define EPIT_CR_DBGEN(x)                         (((uint32_t)(((uint32_t)(x)) << EPIT_CR_DBGEN_SHIFT)) & EPIT_CR_DBGEN_MASK)
#define EPIT_CR_WAITEN_MASK                      (0x80000U)
#define EPIT_CR_WAITEN_SHIFT                     (19U)
#define EPIT_CR_WAITEN(x)                        (((uint32_t)(((uint32_t)(x)) << EPIT_CR_WAITEN_SHIFT)) & EPIT_CR_WAITEN_MASK)
#define EPIT_CR_STOPEN_MASK                      (0x200000U)
#define EPIT_CR_STOPEN_SHIFT                     (21U)
#define EPIT_CR_STOPEN(x)                        (((uint32_t)(((uint32_t)(x)) << EPIT_CR_STOPEN_SHIFT)) & EPIT_CR_STOPEN_MASK)
#define EPIT_CR_OM_MASK                          (0xC00000U)
#define EPIT_CR_OM_SHIFT                         (22U)
#define EPIT_CR_OM(x)                            (((uint32_t)(((uint32_t)(x)) << EPIT_CR_OM_SHIFT)) & EPIT_CR_OM_MASK)
#define EPIT_CR_CLKSRC_MASK                      (0x3000000U)
#define EPIT_CR_CLKSRC_SHIFT                     (24U)
#define EPIT_CR_CLKSRC(x)                        (((uint32_t)(((uint32_t)(x)) << EPIT_CR_CLKSRC_SHIFT)) & EPIT_CR_CLKSRC_MASK)

/*! @name SR - Status register */
#define EPIT_SR_OCIF_MASK                        (0x1U)
#define EPIT_SR_OCIF_SHIFT                       (0U)
#define EPIT_SR_OCIF(x)                          (((uint32_t)(((uint32_t)(x)) << EPIT_SR_OCIF_SHIFT)) & EPIT_SR_OCIF_MASK)

/*! @name LR - Load register */
#define EPIT_LR_LOAD_MASK                        (0xFFFFFFFFU)
#define EPIT_LR_LOAD_SHIFT                       (0U)
#define EPIT_LR_LOAD(x)                          (((uint32_t)(((uint32_t)(x)) << EPIT_LR_LOAD_SHIFT)) & EPIT_LR_LOAD_MASK)

/*! @name CMPR - Compare register */
#define EPIT_CMPR_COMPARE_MASK                   (0xFFFFFFFFU)
#define EPIT_CMPR_COMPARE_SHIFT                  (0U)
#define EPIT_CMPR_COMPARE(x)                     (((uint32_t)(((uint32_t)(x)) << EPIT_CMPR_COMPARE_SHIFT)) & EPIT_CMPR_COMPARE_MASK)

/*! @name CNR - Counter register */
#define EPIT_CNR_COUNT_MASK                      (0xFFFFFFFFU)
#define EPIT_CNR_COUNT_SHIFT                     (0U)
#define EPIT_CNR_COUNT(x)                        (((uint32_t)(((uint32_t)(x)) << EPIT_CNR_COUNT_SHIFT)) & EPIT_CNR_COUNT_MASK)


/*!
 * @}
 */ /* end of group EPIT_Register_Masks */


/* EPIT - Peripheral instance base addresses */
/** Peripheral EPIT1 base address */
#define EPIT1_BASE                               (0x20D0000u)
/** Peripheral EPIT1 base pointer */
#define EPIT1                                    ((EPIT_Type *)EPIT1_BASE)
/** Peripheral EPIT2 base address */
#define EPIT2_BASE                               (0x20D4000u)
/** Peripheral EPIT2 base pointer */
#define EPIT2                                    ((EPIT_Type *)EPIT2_BASE)
/** Array initializer of EPIT peripheral base addresses */
#define EPIT_BASE_ADDRS                          { 0u, EPIT1_BASE, EPIT2_BASE }
/** Array initializer of EPIT peripheral base pointers */
#define EPIT_BASE_PTRS                           { (EPIT_Type *)0u, EPIT1, EPIT2 }
/** Interrupt vectors for the EPIT peripheral type */
#define EPIT_IRQS                                { NotAvail_IRQn, EPIT1_IRQn, EPIT2_IRQn }

/*!
 * @}
 */ /* end of group EPIT_Peripheral_Access_Layer */

/* ----------------------------------------------------------------------------
   -- UART Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup UART_Peripheral_Access_Layer UART Peripheral Access Layer
 * @{
 */

/** UART - Register Layout Typedef */
typedef struct {
  __I  uint32_t URXD;                              /**< UART Receiver Register, offset: 0x0 */
       uint8_t RESERVED_0[60];
  __IO uint32_t UTXD;                              /**< UART Transmitter Register, offset: 0x40 */
       uint8_t RESERVED_1[60];
  __IO uint32_t UCR1;                              /**< UART Control Register 1, offset: 0x80 */
  __IO uint32_t UCR2;                              /**< UART Control Register 2, offset: 0x84 */
  __IO uint32_t UCR3;                              /**< UART Control Register 3, offset: 0x88 */
  __IO uint32_t UCR4;                              /**< UART Control Register 4, offset: 0x8C */
  __IO uint32_t UFCR;                              /**< UART FIFO Control Register, offset: 0x90 */
  __IO uint32_t USR1;                              /**< UART Status Register 1, offset: 0x94 */
  __IO uint32_t USR2;                              /**< UART Status Register 2, offset: 0x98 */
  __IO uint32_t UESC;                              /**< UART Escape Character Register, offset: 0x9C */
  __IO uint32_t UTIM;                              /**< UART Escape Timer Register, offset: 0xA0 */
  __IO uint32_t UBIR;                              /**< UART BRM Incremental Register, offset: 0xA4 */
  __IO uint32_t UBMR;                              /**< UART BRM Modulator Register, offset: 0xA8 */
  __I  uint32_t UBRC;                              /**< UART Baud Rate Count Register, offset: 0xAC */
  __IO uint32_t ONEMS;                             /**< UART One Millisecond Register, offset: 0xB0 */
  __IO uint32_t UTS;                               /**< UART Test Register, offset: 0xB4 */
  __IO uint32_t UMCR;                              /**< UART RS-485 Mode Control Register, offset: 0xB8 */
} UART_Type;

/* ----------------------------------------------------------------------------
   -- UART Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup UART_Register_Masks UART Register Masks
 * @{
 */

/*! @name URXD - UART Receiver Register */
#define UART_URXD_RX_DATA_MASK                   (0xFFU)
#define UART_URXD_RX_DATA_SHIFT                  (0U)
#define UART_URXD_RX_DATA(x)                     (((uint32_t)(((uint32_t)(x)) << UART_URXD_RX_DATA_SHIFT)) & UART_URXD_RX_DATA_MASK)
#define UART_URXD_PRERR_MASK                     (0x400U)
#define UART_URXD_PRERR_SHIFT                    (10U)
#define UART_URXD_PRERR(x)                       (((uint32_t)(((uint32_t)(x)) << UART_URXD_PRERR_SHIFT)) & UART_URXD_PRERR_MASK)
#define UART_URXD_BRK_MASK                       (0x800U)
#define UART_URXD_BRK_SHIFT                      (11U)
#define UART_URXD_BRK(x)                         (((uint32_t)(((uint32_t)(x)) << UART_URXD_BRK_SHIFT)) & UART_URXD_BRK_MASK)
#define UART_URXD_FRMERR_MASK                    (0x1000U)
#define UART_URXD_FRMERR_SHIFT                   (12U)
#define UART_URXD_FRMERR(x)                      (((uint32_t)(((uint32_t)(x)) << UART_URXD_FRMERR_SHIFT)) & UART_URXD_FRMERR_MASK)
#define UART_URXD_OVRRUN_MASK                    (0x2000U)
#define UART_URXD_OVRRUN_SHIFT                   (13U)
#define UART_URXD_OVRRUN(x)                      (((uint32_t)(((uint32_t)(x)) << UART_URXD_OVRRUN_SHIFT)) & UART_URXD_OVRRUN_MASK)
#define UART_URXD_ERR_MASK                       (0x4000U)
#define UART_URXD_ERR_SHIFT                      (14U)
#define UART_URXD_ERR(x)                         (((uint32_t)(((uint32_t)(x)) << UART_URXD_ERR_SHIFT)) & UART_URXD_ERR_MASK)
#define UART_URXD_CHARRDY_MASK                   (0x8000U)
#define UART_URXD_CHARRDY_SHIFT                  (15U)
#define UART_URXD_CHARRDY(x)                     (((uint32_t)(((uint32_t)(x)) << UART_URXD_CHARRDY_SHIFT)) & UART_URXD_CHARRDY_MASK)

/*! @name UTXD - UART Transmitter Register */
#define UART_UTXD_TX_DATA_MASK                   (0xFFU)
#define UART_UTXD_TX_DATA_SHIFT                  (0U)
#define UART_UTXD_TX_DATA(x)                     (((uint32_t)(((uint32_t)(x)) << UART_UTXD_TX_DATA_SHIFT)) & UART_UTXD_TX_DATA_MASK)

/*! @name UCR1 - UART Control Register 1 */
#define UART_UCR1_UARTEN_MASK                    (0x1U)
#define UART_UCR1_UARTEN_SHIFT                   (0U)
#define UART_UCR1_UARTEN(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR1_UARTEN_SHIFT)) & UART_UCR1_UARTEN_MASK)
#define UART_UCR1_DOZE_MASK                      (0x2U)
#define UART_UCR1_DOZE_SHIFT                     (1U)
#define UART_UCR1_DOZE(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR1_DOZE_SHIFT)) & UART_UCR1_DOZE_MASK)
#define UART_UCR1_ATDMAEN_MASK                   (0x4U)
#define UART_UCR1_ATDMAEN_SHIFT                  (2U)
#define UART_UCR1_ATDMAEN(x)                     (((uint32_t)(((uint32_t)(x)) << UART_UCR1_ATDMAEN_SHIFT)) & UART_UCR1_ATDMAEN_MASK)
#define UART_UCR1_TXDMAEN_MASK                   (0x8U)
#define UART_UCR1_TXDMAEN_SHIFT                  (3U)
#define UART_UCR1_TXDMAEN(x)                     (((uint32_t)(((uint32_t)(x)) << UART_UCR1_TXDMAEN_SHIFT)) & UART_UCR1_TXDMAEN_MASK)
#define UART_UCR1_SNDBRK_MASK                    (0x10U)
#define UART_UCR1_SNDBRK_SHIFT                   (4U)
#define UART_UCR1_SNDBRK(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR1_SNDBRK_SHIFT)) & UART_UCR1_SNDBRK_MASK)
#define UART_UCR1_RTSDEN_MASK                    (0x20U)
#define UART_UCR1_RTSDEN_SHIFT                   (5U)
#define UART_UCR1_RTSDEN(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR1_RTSDEN_SHIFT)) & UART_UCR1_RTSDEN_MASK)
#define UART_UCR1_TXMPTYEN_MASK                  (0x40U)
#define UART_UCR1_TXMPTYEN_SHIFT                 (6U)
#define UART_UCR1_TXMPTYEN(x)                    (((uint32_t)(((uint32_t)(x)) << UART_UCR1_TXMPTYEN_SHIFT)) & UART_UCR1_TXMPTYEN_MASK)
#define UART_UCR1_IREN_MASK                      (0x80U)
#define UART_UCR1_IREN_SHIFT                     (7U)
#define UART_UCR1_IREN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR1_IREN_SHIFT)) & UART_UCR1_IREN_MASK)
#define UART_UCR1_RXDMAEN_MASK                   (0x100U)
#define UART_UCR1_RXDMAEN_SHIFT                  (8U)
#define UART_UCR1_RXDMAEN(x)                     (((uint32_t)(((uint32_t)(x)) << UART_UCR1_RXDMAEN_SHIFT)) & UART_UCR1_RXDMAEN_MASK)
#define UART_UCR1_RRDYEN_MASK                    (0x200U)
#define UART_UCR1_RRDYEN_SHIFT                   (9U)
#define UART_UCR1_RRDYEN(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR1_RRDYEN_SHIFT)) & UART_UCR1_RRDYEN_MASK)
#define UART_UCR1_ICD_MASK                       (0xC00U)
#define UART_UCR1_ICD_SHIFT                      (10U)
#define UART_UCR1_ICD(x)                         (((uint32_t)(((uint32_t)(x)) << UART_UCR1_ICD_SHIFT)) & UART_UCR1_ICD_MASK)
#define UART_UCR1_IDEN_MASK                      (0x1000U)
#define UART_UCR1_IDEN_SHIFT                     (12U)
#define UART_UCR1_IDEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR1_IDEN_SHIFT)) & UART_UCR1_IDEN_MASK)
#define UART_UCR1_TRDYEN_MASK                    (0x2000U)
#define UART_UCR1_TRDYEN_SHIFT                   (13U)
#define UART_UCR1_TRDYEN(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR1_TRDYEN_SHIFT)) & UART_UCR1_TRDYEN_MASK)
#define UART_UCR1_ADBR_MASK                      (0x4000U)
#define UART_UCR1_ADBR_SHIFT                     (14U)
#define UART_UCR1_ADBR(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR1_ADBR_SHIFT)) & UART_UCR1_ADBR_MASK)
#define UART_UCR1_ADEN_MASK                      (0x8000U)
#define UART_UCR1_ADEN_SHIFT                     (15U)
#define UART_UCR1_ADEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR1_ADEN_SHIFT)) & UART_UCR1_ADEN_MASK)

/*! @name UCR2 - UART Control Register 2 */
#define UART_UCR2_SRST_MASK                      (0x1U)
#define UART_UCR2_SRST_SHIFT                     (0U)
#define UART_UCR2_SRST(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_SRST_SHIFT)) & UART_UCR2_SRST_MASK)
#define UART_UCR2_RXEN_MASK                      (0x2U)
#define UART_UCR2_RXEN_SHIFT                     (1U)
#define UART_UCR2_RXEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_RXEN_SHIFT)) & UART_UCR2_RXEN_MASK)
#define UART_UCR2_TXEN_MASK                      (0x4U)
#define UART_UCR2_TXEN_SHIFT                     (2U)
#define UART_UCR2_TXEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_TXEN_SHIFT)) & UART_UCR2_TXEN_MASK)
#define UART_UCR2_ATEN_MASK                      (0x8U)
#define UART_UCR2_ATEN_SHIFT                     (3U)
#define UART_UCR2_ATEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_ATEN_SHIFT)) & UART_UCR2_ATEN_MASK)
#define UART_UCR2_RTSEN_MASK                     (0x10U)
#define UART_UCR2_RTSEN_SHIFT                    (4U)
#define UART_UCR2_RTSEN(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UCR2_RTSEN_SHIFT)) & UART_UCR2_RTSEN_MASK)
#define UART_UCR2_WS_MASK                        (0x20U)
#define UART_UCR2_WS_SHIFT                       (5U)
#define UART_UCR2_WS(x)                          (((uint32_t)(((uint32_t)(x)) << UART_UCR2_WS_SHIFT)) & UART_UCR2_WS_MASK)
#define UART_UCR2_STPB_MASK                      (0x40U)
#define UART_UCR2_STPB_SHIFT                     (6U)
#define UART_UCR2_STPB(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_STPB_SHIFT)) & UART_UCR2_STPB_MASK)
#define UART_UCR2_PROE_MASK                      (0x80U)
#define UART_UCR2_PROE_SHIFT                     (7U)
#define UART_UCR2_PROE(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_PROE_SHIFT)) & UART_UCR2_PROE_MASK)
#define UART_UCR2_PREN_MASK                      (0x100U)
#define UART_UCR2_PREN_SHIFT                     (8U)
#define UART_UCR2_PREN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_PREN_SHIFT)) & UART_UCR2_PREN_MASK)
#define UART_UCR2_RTEC_MASK                      (0x600U)
#define UART_UCR2_RTEC_SHIFT                     (9U)
#define UART_UCR2_RTEC(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_RTEC_SHIFT)) & UART_UCR2_RTEC_MASK)
#define UART_UCR2_ESCEN_MASK                     (0x800U)
#define UART_UCR2_ESCEN_SHIFT                    (11U)
#define UART_UCR2_ESCEN(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UCR2_ESCEN_SHIFT)) & UART_UCR2_ESCEN_MASK)
#define UART_UCR2_CTS_MASK                       (0x1000U)
#define UART_UCR2_CTS_SHIFT                      (12U)
#define UART_UCR2_CTS(x)                         (((uint32_t)(((uint32_t)(x)) << UART_UCR2_CTS_SHIFT)) & UART_UCR2_CTS_MASK)
#define UART_UCR2_CTSC_MASK                      (0x2000U)
#define UART_UCR2_CTSC_SHIFT                     (13U)
#define UART_UCR2_CTSC(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_CTSC_SHIFT)) & UART_UCR2_CTSC_MASK)
#define UART_UCR2_IRTS_MASK                      (0x4000U)
#define UART_UCR2_IRTS_SHIFT                     (14U)
#define UART_UCR2_IRTS(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_IRTS_SHIFT)) & UART_UCR2_IRTS_MASK)
#define UART_UCR2_ESCI_MASK                      (0x8000U)
#define UART_UCR2_ESCI_SHIFT                     (15U)
#define UART_UCR2_ESCI(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_ESCI_SHIFT)) & UART_UCR2_ESCI_MASK)

/*! @name UCR3 - UART Control Register 3 */
#define UART_UCR3_ACIEN_MASK                     (0x1U)
#define UART_UCR3_ACIEN_SHIFT                    (0U)
#define UART_UCR3_ACIEN(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UCR3_ACIEN_SHIFT)) & UART_UCR3_ACIEN_MASK)
#define UART_UCR3_INVT_MASK                      (0x2U)
#define UART_UCR3_INVT_SHIFT                     (1U)
#define UART_UCR3_INVT(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR3_INVT_SHIFT)) & UART_UCR3_INVT_MASK)
#define UART_UCR3_RXDMUXSEL_MASK                 (0x4U)
#define UART_UCR3_RXDMUXSEL_SHIFT                (2U)
#define UART_UCR3_RXDMUXSEL(x)                   (((uint32_t)(((uint32_t)(x)) << UART_UCR3_RXDMUXSEL_SHIFT)) & UART_UCR3_RXDMUXSEL_MASK)
#define UART_UCR3_DTRDEN_MASK                    (0x8U)
#define UART_UCR3_DTRDEN_SHIFT                   (3U)
#define UART_UCR3_DTRDEN(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR3_DTRDEN_SHIFT)) & UART_UCR3_DTRDEN_MASK)
#define UART_UCR3_AWAKEN_MASK                    (0x10U)
#define UART_UCR3_AWAKEN_SHIFT                   (4U)
#define UART_UCR3_AWAKEN(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR3_AWAKEN_SHIFT)) & UART_UCR3_AWAKEN_MASK)
#define UART_UCR3_AIRINTEN_MASK                  (0x20U)
#define UART_UCR3_AIRINTEN_SHIFT                 (5U)
#define UART_UCR3_AIRINTEN(x)                    (((uint32_t)(((uint32_t)(x)) << UART_UCR3_AIRINTEN_SHIFT)) & UART_UCR3_AIRINTEN_MASK)
#define UART_UCR3_RXDSEN_MASK                    (0x40U)
#define UART_UCR3_RXDSEN_SHIFT                   (6U)
#define UART_UCR3_RXDSEN(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR3_RXDSEN_SHIFT)) & UART_UCR3_RXDSEN_MASK)
#define UART_UCR3_ADNIMP_MASK                    (0x80U)
#define UART_UCR3_ADNIMP_SHIFT                   (7U)
#define UART_UCR3_ADNIMP(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR3_ADNIMP_SHIFT)) & UART_UCR3_ADNIMP_MASK)
#define UART_UCR3_RI_MASK                        (0x100U)
#define UART_UCR3_RI_SHIFT                       (8U)
#define UART_UCR3_RI(x)                          (((uint32_t)(((uint32_t)(x)) << UART_UCR3_RI_SHIFT)) & UART_UCR3_RI_MASK)
#define UART_UCR3_DCD_MASK                       (0x200U)
#define UART_UCR3_DCD_SHIFT                      (9U)
#define UART_UCR3_DCD(x)                         (((uint32_t)(((uint32_t)(x)) << UART_UCR3_DCD_SHIFT)) & UART_UCR3_DCD_MASK)
#define UART_UCR3_DSR_MASK                       (0x400U)
#define UART_UCR3_DSR_SHIFT                      (10U)
#define UART_UCR3_DSR(x)                         (((uint32_t)(((uint32_t)(x)) << UART_UCR3_DSR_SHIFT)) & UART_UCR3_DSR_MASK)
#define UART_UCR3_FRAERREN_MASK                  (0x800U)
#define UART_UCR3_FRAERREN_SHIFT                 (11U)
#define UART_UCR3_FRAERREN(x)                    (((uint32_t)(((uint32_t)(x)) << UART_UCR3_FRAERREN_SHIFT)) & UART_UCR3_FRAERREN_MASK)
#define UART_UCR3_PARERREN_MASK                  (0x1000U)
#define UART_UCR3_PARERREN_SHIFT                 (12U)
#define UART_UCR3_PARERREN(x)                    (((uint32_t)(((uint32_t)(x)) << UART_UCR3_PARERREN_SHIFT)) & UART_UCR3_PARERREN_MASK)
#define UART_UCR3_DTREN_MASK                     (0x2000U)
#define UART_UCR3_DTREN_SHIFT                    (13U)
#define UART_UCR3_DTREN(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UCR3_DTREN_SHIFT)) & UART_UCR3_DTREN_MASK)
#define UART_UCR3_DPEC_MASK                      (0xC000U)
#define UART_UCR3_DPEC_SHIFT                     (14U)
#define UART_UCR3_DPEC(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR3_DPEC_SHIFT)) & UART_UCR3_DPEC_MASK)

/*! @name UCR4 - UART Control Register 4 */
#define UART_UCR4_DREN_MASK                      (0x1U)
#define UART_UCR4_DREN_SHIFT                     (0U)
#define UART_UCR4_DREN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR4_DREN_SHIFT)) & UART_UCR4_DREN_MASK)
#define UART_UCR4_OREN_MASK                      (0x2U)
#define UART_UCR4_OREN_SHIFT                     (1U)
#define UART_UCR4_OREN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR4_OREN_SHIFT)) & UART_UCR4_OREN_MASK)
#define UART_UCR4_BKEN_MASK                      (0x4U)
#define UART_UCR4_BKEN_SHIFT                     (2U)
#define UART_UCR4_BKEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR4_BKEN_SHIFT)) & UART_UCR4_BKEN_MASK)
#define UART_UCR4_TCEN_MASK                      (0x8U)
#define UART_UCR4_TCEN_SHIFT                     (3U)
#define UART_UCR4_TCEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR4_TCEN_SHIFT)) & UART_UCR4_TCEN_MASK)
#define UART_UCR4_LPBYP_MASK                     (0x10U)
#define UART_UCR4_LPBYP_SHIFT                    (4U)
#define UART_UCR4_LPBYP(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UCR4_LPBYP_SHIFT)) & UART_UCR4_LPBYP_MASK)
#define UART_UCR4_IRSC_MASK                      (0x20U)
#define UART_UCR4_IRSC_SHIFT                     (5U)
#define UART_UCR4_IRSC(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR4_IRSC_SHIFT)) & UART_UCR4_IRSC_MASK)
#define UART_UCR4_IDDMAEN_MASK                   (0x40U)
#define UART_UCR4_IDDMAEN_SHIFT                  (6U)
#define UART_UCR4_IDDMAEN(x)                     (((uint32_t)(((uint32_t)(x)) << UART_UCR4_IDDMAEN_SHIFT)) & UART_UCR4_IDDMAEN_MASK)
#define UART_UCR4_WKEN_MASK                      (0x80U)
#define UART_UCR4_WKEN_SHIFT                     (7U)
#define UART_UCR4_WKEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR4_WKEN_SHIFT)) & UART_UCR4_WKEN_MASK)
#define UART_UCR4_ENIRI_MASK                     (0x100U)
#define UART_UCR4_ENIRI_SHIFT                    (8U)
#define UART_UCR4_ENIRI(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UCR4_ENIRI_SHIFT)) & UART_UCR4_ENIRI_MASK)
#define UART_UCR4_INVR_MASK                      (0x200U)
#define UART_UCR4_INVR_SHIFT                     (9U)
#define UART_UCR4_INVR(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR4_INVR_SHIFT)) & UART_UCR4_INVR_MASK)
#define UART_UCR4_CTSTL_MASK                     (0xFC00U)
#define UART_UCR4_CTSTL_SHIFT                    (10U)
#define UART_UCR4_CTSTL(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UCR4_CTSTL_SHIFT)) & UART_UCR4_CTSTL_MASK)

/*! @name UFCR - UART FIFO Control Register */
#define UART_UFCR_RXTL_MASK                      (0x3FU)
#define UART_UFCR_RXTL_SHIFT                     (0U)
#define UART_UFCR_RXTL(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UFCR_RXTL_SHIFT)) & UART_UFCR_RXTL_MASK)
#define UART_UFCR_DCEDTE_MASK                    (0x40U)
#define UART_UFCR_DCEDTE_SHIFT                   (6U)
#define UART_UFCR_DCEDTE(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UFCR_DCEDTE_SHIFT)) & UART_UFCR_DCEDTE_MASK)
#define UART_UFCR_RFDIV_MASK                     (0x380U)
#define UART_UFCR_RFDIV_SHIFT                    (7U)
#define UART_UFCR_RFDIV(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UFCR_RFDIV_SHIFT)) & UART_UFCR_RFDIV_MASK)
#define UART_UFCR_TXTL_MASK                      (0xFC00U)
#define UART_UFCR_TXTL_SHIFT                     (10U)
#define UART_UFCR_TXTL(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UFCR_TXTL_SHIFT)) & UART_UFCR_TXTL_MASK)

/*! @name USR1 - UART Status Register 1 */
#define UART_USR1_SAD_MASK                       (0x8U)
#define UART_USR1_SAD_SHIFT                      (3U)
#define UART_USR1_SAD(x)                         (((uint32_t)(((uint32_t)(x)) << UART_USR1_SAD_SHIFT)) & UART_USR1_SAD_MASK)
#define UART_USR1_AWAKE_MASK                     (0x10U)
#define UART_USR1_AWAKE_SHIFT                    (4U)
#define UART_USR1_AWAKE(x)                       (((uint32_t)(((uint32_t)(x)) << UART_USR1_AWAKE_SHIFT)) & UART_USR1_AWAKE_MASK)
#define UART_USR1_AIRINT_MASK                    (0x20U)
#define UART_USR1_AIRINT_SHIFT                   (5U)
#define UART_USR1_AIRINT(x)                      (((uint32_t)(((uint32_t)(x)) << UART_USR1_AIRINT_SHIFT)) & UART_USR1_AIRINT_MASK)
#define UART_USR1_RXDS_MASK                      (0x40U)
#define UART_USR1_RXDS_SHIFT                     (6U)
#define UART_USR1_RXDS(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR1_RXDS_SHIFT)) & UART_USR1_RXDS_MASK)
#define UART_USR1_DTRD_MASK                      (0x80U)
#define UART_USR1_DTRD_SHIFT                     (7U)
#define UART_USR1_DTRD(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR1_DTRD_SHIFT)) & UART_USR1_DTRD_MASK)
#define UART_USR1_AGTIM_MASK                     (0x100U)
#define UART_USR1_AGTIM_SHIFT                    (8U)
#define UART_USR1_AGTIM(x)                       (((uint32_t)(((uint32_t)(x)) << UART_USR1_AGTIM_SHIFT)) & UART_USR1_AGTIM_MASK)
#define UART_USR1_RRDY_MASK                      (0x200U)
#define UART_USR1_RRDY_SHIFT                     (9U)
#define UART_USR1_RRDY(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR1_RRDY_SHIFT)) & UART_USR1_RRDY_MASK)
#define UART_USR1_FRAMERR_MASK                   (0x400U)
#define UART_USR1_FRAMERR_SHIFT                  (10U)
#define UART_USR1_FRAMERR(x)                     (((uint32_t)(((uint32_t)(x)) << UART_USR1_FRAMERR_SHIFT)) & UART_USR1_FRAMERR_MASK)
#define UART_USR1_ESCF_MASK                      (0x800U)
#define UART_USR1_ESCF_SHIFT                     (11U)
#define UART_USR1_ESCF(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR1_ESCF_SHIFT)) & UART_USR1_ESCF_MASK)
#define UART_USR1_RTSD_MASK                      (0x1000U)
#define UART_USR1_RTSD_SHIFT                     (12U)
#define UART_USR1_RTSD(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR1_RTSD_SHIFT)) & UART_USR1_RTSD_MASK)
#define UART_USR1_TRDY_MASK                      (0x2000U)
#define UART_USR1_TRDY_SHIFT                     (13U)
#define UART_USR1_TRDY(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR1_TRDY_SHIFT)) & UART_USR1_TRDY_MASK)
#define UART_USR1_RTSS_MASK                      (0x4000U)
#define UART_USR1_RTSS_SHIFT                     (14U)
#define UART_USR1_RTSS(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR1_RTSS_SHIFT)) & UART_USR1_RTSS_MASK)
#define UART_USR1_PARITYERR_MASK                 (0x8000U)
#define UART_USR1_PARITYERR_SHIFT                (15U)
#define UART_USR1_PARITYERR(x)                   (((uint32_t)(((uint32_t)(x)) << UART_USR1_PARITYERR_SHIFT)) & UART_USR1_PARITYERR_MASK)

/*! @name USR2 - UART Status Register 2 */
#define UART_USR2_RDR_MASK                       (0x1U)
#define UART_USR2_RDR_SHIFT                      (0U)
#define UART_USR2_RDR(x)                         (((uint32_t)(((uint32_t)(x)) << UART_USR2_RDR_SHIFT)) & UART_USR2_RDR_MASK)
#define UART_USR2_ORE_MASK                       (0x2U)
#define UART_USR2_ORE_SHIFT                      (1U)
#define UART_USR2_ORE(x)                         (((uint32_t)(((uint32_t)(x)) << UART_USR2_ORE_SHIFT)) & UART_USR2_ORE_MASK)
#define UART_USR2_BRCD_MASK                      (0x4U)
#define UART_USR2_BRCD_SHIFT                     (2U)
#define UART_USR2_BRCD(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_BRCD_SHIFT)) & UART_USR2_BRCD_MASK)
#define UART_USR2_TXDC_MASK                      (0x8U)
#define UART_USR2_TXDC_SHIFT                     (3U)
#define UART_USR2_TXDC(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_TXDC_SHIFT)) & UART_USR2_TXDC_MASK)
#define UART_USR2_RTSF_MASK                      (0x10U)
#define UART_USR2_RTSF_SHIFT                     (4U)
#define UART_USR2_RTSF(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_RTSF_SHIFT)) & UART_USR2_RTSF_MASK)
#define UART_USR2_DCDIN_MASK                     (0x20U)
#define UART_USR2_DCDIN_SHIFT                    (5U)
#define UART_USR2_DCDIN(x)                       (((uint32_t)(((uint32_t)(x)) << UART_USR2_DCDIN_SHIFT)) & UART_USR2_DCDIN_MASK)
#define UART_USR2_DCDDELT_MASK                   (0x40U)
#define UART_USR2_DCDDELT_SHIFT                  (6U)
#define UART_USR2_DCDDELT(x)                     (((uint32_t)(((uint32_t)(x)) << UART_USR2_DCDDELT_SHIFT)) & UART_USR2_DCDDELT_MASK)
#define UART_USR2_WAKE_MASK                      (0x80U)
#define UART_USR2_WAKE_SHIFT                     (7U)
#define UART_USR2_WAKE(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_WAKE_SHIFT)) & UART_USR2_WAKE_MASK)
#define UART_USR2_IRINT_MASK                     (0x100U)
#define UART_USR2_IRINT_SHIFT                    (8U)
#define UART_USR2_IRINT(x)                       (((uint32_t)(((uint32_t)(x)) << UART_USR2_IRINT_SHIFT)) & UART_USR2_IRINT_MASK)
#define UART_USR2_RIIN_MASK                      (0x200U)
#define UART_USR2_RIIN_SHIFT                     (9U)
#define UART_USR2_RIIN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_RIIN_SHIFT)) & UART_USR2_RIIN_MASK)
#define UART_USR2_RIDELT_MASK                    (0x400U)
#define UART_USR2_RIDELT_SHIFT                   (10U)
#define UART_USR2_RIDELT(x)                      (((uint32_t)(((uint32_t)(x)) << UART_USR2_RIDELT_SHIFT)) & UART_USR2_RIDELT_MASK)
#define UART_USR2_ACST_MASK                      (0x800U)
#define UART_USR2_ACST_SHIFT                     (11U)
#define UART_USR2_ACST(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_ACST_SHIFT)) & UART_USR2_ACST_MASK)
#define UART_USR2_IDLE_MASK                      (0x1000U)
#define UART_USR2_IDLE_SHIFT                     (12U)
#define UART_USR2_IDLE(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_IDLE_SHIFT)) & UART_USR2_IDLE_MASK)
#define UART_USR2_DTRF_MASK                      (0x2000U)
#define UART_USR2_DTRF_SHIFT                     (13U)
#define UART_USR2_DTRF(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_DTRF_SHIFT)) & UART_USR2_DTRF_MASK)
#define UART_USR2_TXFE_MASK                      (0x4000U)
#define UART_USR2_TXFE_SHIFT                     (14U)
#define UART_USR2_TXFE(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_TXFE_SHIFT)) & UART_USR2_TXFE_MASK)
#define UART_USR2_ADET_MASK                      (0x8000U)
#define UART_USR2_ADET_SHIFT                     (15U)
#define UART_USR2_ADET(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_ADET_SHIFT)) & UART_USR2_ADET_MASK)

/*! @name UESC - UART Escape Character Register */
#define UART_UESC_ESC_CHAR_MASK                  (0xFFU)
#define UART_UESC_ESC_CHAR_SHIFT                 (0U)
#define UART_UESC_ESC_CHAR(x)                    (((uint32_t)(((uint32_t)(x)) << UART_UESC_ESC_CHAR_SHIFT)) & UART_UESC_ESC_CHAR_MASK)

/*! @name UTIM - UART Escape Timer Register */
#define UART_UTIM_TIM_MASK                       (0xFFFU)
#define UART_UTIM_TIM_SHIFT                      (0U)
#define UART_UTIM_TIM(x)                         (((uint32_t)(((uint32_t)(x)) << UART_UTIM_TIM_SHIFT)) & UART_UTIM_TIM_MASK)

/*! @name UBIR - UART BRM Incremental Register */
#define UART_UBIR_INC_MASK                       (0xFFFFU)
#define UART_UBIR_INC_SHIFT                      (0U)
#define UART_UBIR_INC(x)                         (((uint32_t)(((uint32_t)(x)) << UART_UBIR_INC_SHIFT)) & UART_UBIR_INC_MASK)

/*! @name UBMR - UART BRM Modulator Register */
#define UART_UBMR_MOD_MASK                       (0xFFFFU)
#define UART_UBMR_MOD_SHIFT                      (0U)
#define UART_UBMR_MOD(x)                         (((uint32_t)(((uint32_t)(x)) << UART_UBMR_MOD_SHIFT)) & UART_UBMR_MOD_MASK)

/*! @name UBRC - UART Baud Rate Count Register */
#define UART_UBRC_BCNT_MASK                      (0xFFFFU)
#define UART_UBRC_BCNT_SHIFT                     (0U)
#define UART_UBRC_BCNT(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UBRC_BCNT_SHIFT)) & UART_UBRC_BCNT_MASK)

/*! @name ONEMS - UART One Millisecond Register */
#define UART_ONEMS_ONEMS_MASK                    (0xFFFFFFU)
#define UART_ONEMS_ONEMS_SHIFT                   (0U)
#define UART_ONEMS_ONEMS(x)                      (((uint32_t)(((uint32_t)(x)) << UART_ONEMS_ONEMS_SHIFT)) & UART_ONEMS_ONEMS_MASK)

/*! @name UTS - UART Test Register */
#define UART_UTS_SOFTRST_MASK                    (0x1U)
#define UART_UTS_SOFTRST_SHIFT                   (0U)
#define UART_UTS_SOFTRST(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UTS_SOFTRST_SHIFT)) & UART_UTS_SOFTRST_MASK)
#define UART_UTS_RXFULL_MASK                     (0x8U)
#define UART_UTS_RXFULL_SHIFT                    (3U)
#define UART_UTS_RXFULL(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UTS_RXFULL_SHIFT)) & UART_UTS_RXFULL_MASK)
#define UART_UTS_TXFULL_MASK                     (0x10U)
#define UART_UTS_TXFULL_SHIFT                    (4U)
#define UART_UTS_TXFULL(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UTS_TXFULL_SHIFT)) & UART_UTS_TXFULL_MASK)
#define UART_UTS_RXEMPTY_MASK                    (0x20U)
#define UART_UTS_RXEMPTY_SHIFT                   (5U)
#define UART_UTS_RXEMPTY(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UTS_RXEMPTY_SHIFT)) & UART_UTS_RXEMPTY_MASK)
#define UART_UTS_TXEMPTY_MASK                    (0x40U)
#define UART_UTS_TXEMPTY_SHIFT                   (6U)
#define UART_UTS_TXEMPTY(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UTS_TXEMPTY_SHIFT)) & UART_UTS_TXEMPTY_MASK)
#define UART_UTS_RXDBG_MASK                      (0x200U)
#define UART_UTS_RXDBG_SHIFT                     (9U)
#define UART_UTS_RXDBG(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UTS_RXDBG_SHIFT)) & UART_UTS_RXDBG_MASK)
#define UART_UTS_LOOPIR_MASK                     (0x400U)
#define UART_UTS_LOOPIR_SHIFT                    (10U)
#define UART_UTS_LOOPIR(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UTS_LOOPIR_SHIFT)) & UART_UTS_LOOPIR_MASK)
#define UART_UTS_DBGEN_MASK                      (0x800U)
#define UART_UTS_DBGEN_SHIFT                     (11U)
#define UART_UTS_DBGEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UTS_DBGEN_SHIFT)) & UART_UTS_DBGEN_MASK)
#define UART_UTS_LOOP_MASK                       (0x1000U)
#define UART_UTS_LOOP_SHIFT                      (12U)
#define UART_UTS_LOOP(x)                         (((uint32_t)(((uint32_t)(x)) << UART_UTS_LOOP_SHIFT)) & UART_UTS_LOOP_MASK)
#define UART_UTS_FRCPERR_MASK                    (0x2000U)
#define UART_UTS_FRCPERR_SHIFT                   (13U)
#define UART_UTS_FRCPERR(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UTS_FRCPERR_SHIFT)) & UART_UTS_FRCPERR_MASK)

/*! @name UMCR - UART RS-485 Mode Control Register */
#define UART_UMCR_MDEN_MASK                      (0x1U)
#define UART_UMCR_MDEN_SHIFT                     (0U)
#define UART_UMCR_MDEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UMCR_MDEN_SHIFT)) & UART_UMCR_MDEN_MASK)
#define UART_UMCR_SLAM_MASK                      (0x2U)
#define UART_UMCR_SLAM_SHIFT                     (1U)
#define UART_UMCR_SLAM(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UMCR_SLAM_SHIFT)) & UART_UMCR_SLAM_MASK)
#define UART_UMCR_TXB8_MASK                      (0x4U)
#define UART_UMCR_TXB8_SHIFT                     (2U)
#define UART_UMCR_TXB8(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UMCR_TXB8_SHIFT)) & UART_UMCR_TXB8_MASK)
#define UART_UMCR_SADEN_MASK                     (0x8U)
#define UART_UMCR_SADEN_SHIFT                    (3U)
#define UART_UMCR_SADEN(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UMCR_SADEN_SHIFT)) & UART_UMCR_SADEN_MASK)
#define UART_UMCR_SLADDR_MASK                    (0xFF00U)
#define UART_UMCR_SLADDR_SHIFT                   (8U)
#define UART_UMCR_SLADDR(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UMCR_SLADDR_SHIFT)) & UART_UMCR_SLADDR_MASK)


/*!
 * @}
 */ /* end of group UART_Register_Masks */


/* UART - Peripheral instance base addresses */
/** Peripheral UART1 base address */
#define UART1_BASE                               (0x2020000u)
/** Peripheral UART1 base pointer */
#define UART1                                    ((UART_Type *)UART1_BASE)
/** Peripheral UART2 base address */
#define UART2_BASE                               (0x21E8000u)
/** Peripheral UART2 base pointer */
#define UART2                                    ((UART_Type *)UART2_BASE)
/** Peripheral UART3 base address */
#define UART3_BASE                               (0x21EC000u)
/** Peripheral UART3 base pointer */
#define UART3                                    ((UART_Type *)UART3_BASE)
/** Peripheral UART4 base address */
#define UART4_BASE                               (0x21F0000u)
/** Peripheral UART4 base pointer */
#define UART4                                    ((UART_Type *)UART4_BASE)
/** Peripheral UART5 base address */
#define UART5_BASE                               (0x21F4000u)
/** Peripheral UART5 base pointer */
#define UART5                                    ((UART_Type *)UART5_BASE)
/** Peripheral UART6 base address */
#define UART6_BASE                               (0x21FC000u)
/** Peripheral UART6 base pointer */
#define UART6                                    ((UART_Type *)UART6_BASE)
/** Peripheral UART7 base address */
#define UART7_BASE                               (0x2018000u)
/** Peripheral UART7 base pointer */
#define UART7                                    ((UART_Type *)UART7_BASE)
/** Peripheral UART8 base address */
#define UART8_BASE                               (0x2288000u)
/** Peripheral UART8 base pointer */
#define UART8                                    ((UART_Type *)UART8_BASE)
/** Array initializer of UART peripheral base addresses */
#define UART_BASE_ADDRS                          { 0u, UART1_BASE, UART2_BASE, UART3_BASE, UART4_BASE, UART5_BASE, UART6_BASE, UART7_BASE, UART8_BASE }
/** Array initializer of UART peripheral base pointers */
#define UART_BASE_PTRS                           { (UART_Type *)0u, UART1, UART2, UART3, UART4, UART5, UART6, UART7, UART8 }
/** Interrupt vectors for the UART peripheral type */
#define UART_IRQS                                { NotAvail_IRQn, UART1_IRQn, UART2_IRQn, UART3_IRQn, UART4_IRQn, UART5_IRQn, UART6_IRQn, UART7_IRQn, UART8_IRQn }

/*!
 * @}
 */ /* end of group UART_Peripheral_Access_Layer */



#endif // _TYPE_H