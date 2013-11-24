/*  Copyright (c) 2013, laborer (laborer@126.com)
 *  Licensed under the BSD 2-Clause License.
 */


#include "common.h"
#include "uart.h"
#include "stc/autoisp.h"
#include "stc/stc.h"


void welcome(void)
{
    uart_baudrate();
    uart_init();
    uart_putstr("c51drv\n");
}

void main(void) {
    welcome();

    while (1) {
        uart_putchar('0');
        delay_ms(500);
    }
}