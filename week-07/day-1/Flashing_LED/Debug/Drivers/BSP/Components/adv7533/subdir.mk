################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/Peti/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/Components/adv7533/adv7533.c 

OBJS += \
./Drivers/BSP/Components/adv7533/adv7533.o 

C_DEPS += \
./Drivers/BSP/Components/adv7533/adv7533.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/adv7533/adv7533.o: C:/Users/Peti/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/Components/adv7533/adv7533.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -IC:/Users/Peti/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Inc -IC:/Users/Peti/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -IC:/Users/Peti/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc -IC:/Users/Peti/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -IC:/Users/Peti/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Core/Inc -IC:/Users/Peti/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Include -I"C:/Users/Peti/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/Components" -I"C:/Users/Peti/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/Components/adv7533/adv7533.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

