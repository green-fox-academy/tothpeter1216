################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include Middlewares/FreeRTOS/subdir.mk
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
my_exam_idea.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
my_exam_idea.list \


# All Target
all: my_exam_idea.elf secondary-outputs

# Tool invocations
my_exam_idea.elf: $(OBJS) $(USER_OBJS) C:\Users\Peti\STM32CubeIDE\workspace_1.0.2\my_exam_idea\STM32F746NGHX_FLASH.ld
	arm-none-eabi-gcc -o "my_exam_idea.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"C:\Users\Peti\STM32CubeIDE\workspace_1.0.2\my_exam_idea\STM32F746NGHX_FLASH.ld" --specs=nosys.specs -Wl,-Map="my_exam_idea.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

my_exam_idea.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "my_exam_idea.list"
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
