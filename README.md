# pico-demo-usb-stdio
RaspberryPi Pico stdio over USB example

# Summary
This example demonstrates how to send strings back and forth over USB between a RaspberryPi Pico stdio and a Windows PC serial port.

# Prerequisites
- Visual Studio Code
- [Pico VS Code Extension]
- Windows 11 PC with PowerShell - should also work with older versions
- Raspberry Pi Pico plugged over USB
- Connected [Raspberry Pi Debug Probe] to automatically flash the firmware

# Build
- Import the project directory in VS Code making sure you enable CMake-Tools extension integration option
- Check that the selected board matches the board you want to test against
- Hit <kbd>Ctrl + Shift + B</kbd> to build and flash the project to your board
- Without Debug Probe you will need to copy the UF2 file from `\build\pico_demo_usb_stdio.uf2` to your board after connecting it while holding down BOOTSEL button

# Usage
Run `com-check.ps1` from your PowerShell and follow instructions.


[Raspberry Pi Debug Probe]: https://www.raspberrypi.com/documentation/microcontrollers/debug-probe.html
[Pico VS Code Extension]: https://github.com/raspberrypi/pico-vscode
