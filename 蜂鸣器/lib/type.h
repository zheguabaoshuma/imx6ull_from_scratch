#ifndef _TYPE_H
#define _TYPE_H

#define __I volatile
#define __O volatile
#define __IO volatile

#define ON 1
#define OFF 0

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