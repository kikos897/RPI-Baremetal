#include "mini_uart.h"

void kernel_main() {
	uart_init();
	uart_send('k');
	uart_send_string("Hello, world!\r\n");
/*
	while (1) {
		uart_send(uart_recv());
	}*/
}
