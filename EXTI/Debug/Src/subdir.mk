################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/DIO_prog.c \
../Src/EXTI_main.c \
../Src/EXTI_program.c \
../Src/NVIC_prog.c \
../Src/PB_prog.c \
../Src/RCC_program.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/DIO_prog.o \
./Src/EXTI_main.o \
./Src/EXTI_program.o \
./Src/NVIC_prog.o \
./Src/PB_prog.o \
./Src/RCC_program.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/DIO_prog.d \
./Src/EXTI_main.d \
./Src/EXTI_program.d \
./Src/NVIC_prog.d \
./Src/PB_prog.d \
./Src/RCC_program.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/DIO_prog.o: ../Src/DIO_prog.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DSTM32 -DSTM32F0 -DSTM32F030C8Tx -DDEBUG -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/DIO_prog.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/EXTI_main.o: ../Src/EXTI_main.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DSTM32 -DSTM32F0 -DSTM32F030C8Tx -DDEBUG -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/EXTI_main.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/EXTI_program.o: ../Src/EXTI_program.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DSTM32 -DSTM32F0 -DSTM32F030C8Tx -DDEBUG -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/EXTI_program.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/NVIC_prog.o: ../Src/NVIC_prog.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DSTM32 -DSTM32F0 -DSTM32F030C8Tx -DDEBUG -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/NVIC_prog.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/PB_prog.o: ../Src/PB_prog.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DSTM32 -DSTM32F0 -DSTM32F030C8Tx -DDEBUG -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/PB_prog.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/RCC_program.o: ../Src/RCC_program.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DSTM32 -DSTM32F0 -DSTM32F030C8Tx -DDEBUG -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/RCC_program.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/syscalls.o: ../Src/syscalls.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DSTM32 -DSTM32F0 -DSTM32F030C8Tx -DDEBUG -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/syscalls.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/sysmem.o: ../Src/sysmem.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DSTM32 -DSTM32F0 -DSTM32F030C8Tx -DDEBUG -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/sysmem.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

