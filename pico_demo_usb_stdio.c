/**
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

 #include <stdio.h>
 #include "pico/stdlib.h"

 int main() {
     stdio_init_all();
     int d = 0;
     printf("Hello, world %d!\n",d);
     while (true) {

         //sleep_ms(1000);

         int input = stdio_getchar_timeout_us(1000);
         if (input!=PICO_ERROR_TIMEOUT)
         {
             printf("%c",input);
         }


         //scanf("%s",&d);
         //stdio_flush();
     }
 }
