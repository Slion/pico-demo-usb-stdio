cmake_minimum_required(VERSION 3.13)

# == DO NOT EDIT THE FOLLOWING LINES for the Raspberry Pi Pico VS Code Extension to work ==
if(WIN32)
    set(USERHOME $ENV{USERPROFILE})
else()
    set(USERHOME $ENV{HOME})
endif()
set(sdkVersion 2.1.1)
set(toolchainVersion 14_2_Rel1)
set(picotoolVersion 2.1.1)
set(picoVscode ${USERHOME}/.pico-sdk/cmake/pico-vscode.cmake)
if (EXISTS ${picoVscode})
    include(${picoVscode})
endif()
# ====================================================================================
set(PICO_BOARD pico2_w CACHE STRING "Board type")

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
include(pico_sdk_import.cmake)

project(pico_demo_usb_stdio)

pico_sdk_init()

add_executable(pico_demo_usb_stdio pico_demo_usb_stdio.c)

# pull in common dependencies
target_link_libraries(pico_demo_usb_stdio pico_stdlib)

# enable usb output, disable uart output
pico_enable_stdio_usb(pico_demo_usb_stdio 1)
pico_enable_stdio_uart(pico_demo_usb_stdio 0)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(pico_demo_usb_stdio)
