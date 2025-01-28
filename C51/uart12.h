#ifndef __UART12_H__
#define __UART12_H__
void init_serial0(unsigned long baudrate);
void init_serial1(void);
char char_avail(void);
char getchar(void);
char putchar(char c);
void send_WWdata(unsigned int wwCommand);
char WWdata_avail(void);
unsigned int get_WWdata(void);
#endif