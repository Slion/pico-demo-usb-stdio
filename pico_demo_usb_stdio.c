/**
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

 #include <stdio.h>
 #include "pico/stdlib.h"

 int main() {
     stdio_init_all();

     printf("pico_demo_usb_stdio\n");
     while (true) {
         // Read incoming characters and write them back
         int input = stdio_getchar_timeout_us(1000);
         if (input!=PICO_ERROR_TIMEOUT)
         {
             printf("%c",input);
         }
     }
 }