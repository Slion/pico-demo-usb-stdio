project(pico_demo_usb_stdio)

add_executable(pico_demo_usb_stdio pico_demo_usb_stdio.c)

# pull in common dependencies
target_link_libraries(pico_demo_usb_stdio pico_stdlib)

# enable usb output, disable uart output
pico_enable_stdio_usb(pico_demo_usb_stdio 1)
pico_enable_stdio_uart(pico_demo_usb_stdio 0)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(pico_demo_usb_stdio)
