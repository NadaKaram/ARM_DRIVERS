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
SSD_DRIVER.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
SSD_DRIVER.list \

OBJCOPY_BIN += \
SSD_DRIVER.bin \


# All Target
all: SSD_DRIVER.elf secondary-outputs

# Tool invocations
SSD_DRIVER.elf: $(OBJS) $(USER_OBJS) C:\Users\lenovo\STM32CubeIDE\workspace_1.4.0\SSD_DRIVER\STM32F030C8TX_FLASH.ld
	arm-none-eabi-gcc -o "SSD_DRIVER.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m0 -T"C:\Users\lenovo\STM32CubeIDE\workspace_1.4.0\SSD_DRIVER\STM32F030C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="SSD_DRIVER.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

SSD_DRIVER.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "SSD_DRIVER.list"
	@echo 'Finished building: $@'
	@echo ' '

SSD_DRIVER.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "SSD_DRIVER.bin"
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
