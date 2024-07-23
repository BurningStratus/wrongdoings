cmake_minimum_required(VERSION 3.13)


include(pico-sdk/pico_sdk_init.cmake)
project(project)
pico_sdk_init()

add_executable(why
    why.c
)

target_link_libraries(why 
    pico_stdlib
    pico_cyw43_arch_none
    )

pico_add_extra_outputs(why)
pico_enable_stdio_usb(why 1)
pico_enable_stdio_uart(why 0)

