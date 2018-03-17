#ifndef FRDM_K66F_H_
#define FRDM_K66F_H_

#include "MK66F18.h"

#include "fsl_i2c_cmsis.h"
#include "register_io_i2c.h"
#include "gpio_driver.h"

extern gpioHandleKSDK_t FXAS21002_INT1;
extern gpioHandleKSDK_t FXAS21002_INT2;
extern gpioHandleKSDK_t FXOS8700_INT1;
extern gpioHandleKSDK_t FXOS8700_INT2;
extern gpioHandleKSDK_t GPIO_DEBUG_1;
extern gpioHandleKSDK_t GPIO_DEBUG_2;
extern gpioHandleKSDK_t GPIO_DEBUG_3;

uint32_t I2C0_GetFreq(void);
void I2C0_InitPins(void);
void I2C0_DeinitPins(void);

#endif /* FRDM_K66F_H_ */
