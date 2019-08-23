################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include Drivers/STM32F7xx_HAL_Driver/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Receive_until_endline.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Receive_until_endline.list \


# All Target
all: Receive_until_endline.elf secondary-outputs

# Tool invocations
Receive_until_endline.elf: $(OBJS) $(USER_OBJS) C:\Users\Peti\STM32CubeIDE\workspace_1.0.2\Receive_until_endline\STM32F746NGHX_FLASH.ld
	arm-none-eabi-gcc -o "Receive_until_endline.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"C:\Users\Peti\STM32CubeIDE\workspace_1.0.2\Receive_until_endline\STM32F746NGHX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Receive_until_endline.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Receive_until_endline.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Receive_until_endline.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
