/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "CPM1" // CrazePony MINI

#define LED0_GPIO GPIOA
#define LED0_PIN Pin_11 // PA11 (M1 LED)
#define LED0
#define LED0_PERIPHERAL RCC_APB2Periph_GPIOA
#define LED1_GPIO GPIOA
#define LED1_PIN Pin_8 // PA8  (M2 LED)
#define LED1
#define LED1_PERIPHERAL RCC_APB2Periph_GPIOA
#define LED2_GPIO GPIOB
#define LED2_PIN (Pin_1 | Pin_3) // PB1  (M3+M4 LED)
#define LED2
#define LED2_PERIPHERAL RCC_APB2Periph_GPIOB


#define ACC
#define USE_ACC_MPU6050

#define GYRO
#define USE_GYRO_MPU6050

//#define BARO
//#define USE_BARO_MS5611

//#define MAG
//#define USE_MAG_HMC5883

#define BRUSHED_MOTORS

#define USE_USART1

#define SERIAL_PORT_COUNT 1

#define USE_ADC

#define BOARD_HAS_VOLTAGE_DIVIDER
#define VBAT_ADC_GPIO               GPIOB
#define VBAT_ADC_GPIO_PIN           GPIO_Pin_0
#define VBAT_ADC_CHANNEL            ADC_Channel_8

#define USE_I2C
#define I2C_DEVICE (I2CDEV_1)

// #define SOFT_I2C // enable to test software i2c
// #define SOFT_I2C_PB1011 // If SOFT_I2C is enabled above, need to define pinout as well (I2C1 = PB67, I2C2 = PB1011)
// #define SOFT_I2C_PB67

//#define SERIAL_RX
//#define USE_SERVOS
#define USE_CLI

// Since the CrazePony MINI PCB has holes for 4 motors in each corner we can save same flash space by disabling support for other mixers.
#define USE_QUAD_MIXER_ONLY

#define NRF24_RX

// v202 protocol @ 250kbps
#define NRF24_PROVIDER NRF24RX_V202_250K

#define USE_SPI
#define USE_SPI_DEVICE_1

#define NRF24_SPI_INSTANCE       SPI1
#define USE_NRF24_SPI1

#define NRF24_CE_GPIO   GPIOA
#define NRF24_CE_PIN    GPIO_Pin_12
#define NRF24_CE_GPIO_CLK_PERIPHERAL RCC_APB2Periph_GPIOA
#define NRF24_CS_GPIO   GPIOA
#define NRF24_CS_PIN    GPIO_Pin_4
#define NRF24_CS_GPIO_CLK_PERIPHERAL RCC_APB2Periph_GPIOA
#define NRF24_IRQ_GPIO   GPIOA
#define NRF24_IRQ_PIN    GPIO_Pin_15
#define NRF24_IRQ_GPIO_CLK_PERIPHERAL RCC_APB2Periph_GPIOA

#if (FLASH_SIZE > 64)
#define BLACKBOX
#else
#define SKIP_TASK_STATISTICS
#define SKIP_CLI_COMMAND_HELP
#endif

//#undef USE_CLI
//#define GTUNE
//#define BLACKBOX
