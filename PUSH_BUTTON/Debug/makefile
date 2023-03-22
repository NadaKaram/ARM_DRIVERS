################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
PUSH_BUTTON.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
PUSH_BUTTON.list \

OBJCOPY_BIN += \
PUSH_BUTTON.bin \


# All Target
all: PUSH_BUTTON.elf secondary-outputs

# Tool invocations
PUSH_BUTTON.elf: $(OBJS) $(USER_OBJS) C:\Users\lenovo\STM32CubeIDE\workspace_1.4.0\PUSH_BUTTON\STM32F103C8TX_FLASH.ld
	arm-none-eabi-gcc -o "PUSH_BUTTON.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\lenovo\STM32CubeIDE\workspace_1.4.0\PUSH_BUTTON\STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="PUSH_BUTTON.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

PUSH_BUTTON.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "PUSH_BUTTON.list"
	@echo 'Finished building: $@'
	@echo ' '

PUSH_BUTTON.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "PUSH_BUTTON.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
