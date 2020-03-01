#ifndef    _MINI_UART_H
#define    _MINI_UART_H

int uart_init( int );
char uart_recv( void );
void uart_send( char c );
int uart_send_string(char* str);

#endif  /*_MINI_UART_H */
