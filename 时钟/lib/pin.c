#include "pin.h"

/*!
 * @brief Sets the IOMUXC pin mux mode.
 * @note The first five parameters can be filled with the pin function ID macros.
 *
 * This is an example to set the ENET1_RX_DATA0 Pad as FLEXCAN1_TX:
 * @code
 * IOMUXC_SetPinMux(IOMUXC_ENET1_RX_DATA0_FLEXCAN1_TX, 0);
 * @endcode
 *
 * This is an example to set the GPIO1_IO02 Pad as I2C1_SCL:
 * @code
 * IOMUXC_SetPinMux(IOMUXC_GPIO1_IO02_I2C1_SCL, 0);
 * @endcode
 *
 * @param muxRegister  The pin mux register.
 * @param muxMode      The pin mux mode.
 * @param inputRegister The select input register.
 * @param inputDaisy   The input daisy.
 * @param configRegister  The config register.
 * @param inputOnfield   Software input on field.
 */
void IOMUXC_SetPinMux(uint32_t muxRegister,
                                    uint32_t muxMode,
                                    uint32_t inputRegister,
                                    uint32_t inputDaisy,
                                    uint32_t configRegister,
                                    uint32_t inputOnfield)
{
    *((volatile uint32_t *)muxRegister) =
        IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(muxMode) | IOMUXC_SW_MUX_CTL_PAD_SION(inputOnfield);

    if (inputRegister)
    {
        *((volatile uint32_t *)inputRegister) = IOMUXC_SELECT_INPUT_DAISY(inputDaisy);
    }
}

/*!
 * @brief Sets the IOMUXC pin configuration.
 * @note The previous five parameters can be filled with the pin function ID macros.
 *
 * This is an example to set pin configuration for IOMUXC_GPIO1_IO02_I2C1_SCL:
 * @code
 * IOMUXC_SetPinConfig(IOMUXC_GPIO1_IO02_I2C1_SCL, IOMUXC_SW_PAD_CTL_PAD_PUE_MASK | IOMUXC_SW_PAD_CTL_PAD_PUS(2U));
 * @endcode
 *
 * @param muxRegister  The pin mux register.
 * @param muxMode      The pin mux mode.
 * @param inputRegister The select input register.
 * @param inputDaisy   The input daisy.
 * @param configRegister  The config register.
 * @param configValue   The pin config value.
 */
void IOMUXC_SetPinConfig(uint32_t muxRegister,
                                       uint32_t muxMode,
                                       uint32_t inputRegister,
                                       uint32_t inputDaisy,
                                       uint32_t configRegister,
                                       uint32_t configValue)
{
    if (configRegister)
    {
        *((volatile uint32_t *)configRegister) = configValue;
    }
}