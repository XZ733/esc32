cmake_minimum_required(VERSION 3.19)
project(esc32 C)

set(CMAKE_C_STANDARD 11)

include_directories(lib)
include_directories(pro)
include_directories(pro/RTE)
include_directories(pro/RTE/_Debug)
include_directories(src)

add_executable(esc32
        lib/stm32f10x.h
        lib/stm32f10x_adc.c
        lib/stm32f10x_adc.h
        lib/stm32f10x_conf.h
        lib/stm32f10x_dbgmcu.c
        lib/stm32f10x_dbgmcu.h
        lib/stm32f10x_dma.c
        lib/stm32f10x_dma.h
        lib/stm32f10x_exti.c
        lib/stm32f10x_exti.h
        lib/stm32f10x_flash.c
        lib/stm32f10x_flash.h
        lib/stm32f10x_gpio.c
        lib/stm32f10x_gpio.h
        lib/stm32f10x_iwdg.c
        lib/stm32f10x_iwdg.h
        lib/stm32f10x_pwr.c
        lib/stm32f10x_pwr.h
        lib/stm32f10x_rcc.c
        lib/stm32f10x_rcc.h
        lib/stm32f10x_tim.c
        lib/stm32f10x_tim.h
        lib/stm32f10x_usart.c
        lib/stm32f10x_usart.h
        lib/system_stm32f10x.c
        lib/system_stm32f10x.h
        pro/RTE/_Debug/RTE_Components.h
        src/adc.c
        src/adc.h
        src/binary.c
        src/binary.h
        src/buildnum.h
        src/cli.c
        src/cli.h
        src/config.c
        src/config.h
        src/core_cm3.h
        src/digital.c
        src/digital.h
        src/fet.c
        src/fet.h
        src/getbuildnum.c
        src/getbuildnum.h
        src/main.c
        src/main.h
        src/misc.c
        src/misc.h
        src/ow.c
        src/ow.h
        src/pwm.c
        src/pwm.h
        src/rcc.c
        src/rcc.h
        src/run.c
        src/run.h
        src/serial.c
        src/serial.h
        src/timer.c
        src/timer.h
        src/watchdog.c
        src/watchdog.h)
