#ifndef __UART12_H__
#define __UART12_H__
void serial0_isr(void) __interrupt(4) __using(2);
void init_serial0(unsigned long baudrate);
void init_serial1(void);
char char_avail0(void);
char getchar0(void);
int putchar0(int c);
void serial1_isr(void) __interrupt(7) __using(3);
void send_WWdata(unsigned int wwCommand);
char WWdata_avail(void);
unsigned int get_WWdata(void);
#endif