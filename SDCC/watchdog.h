#ifndef __WATCHDOG_H__
#define __WATCHDOG_H__
void clr_watchdog(void);
void enable_watchdog(void);
void disable_watchdog(void);
void reset_watchdog(void);
void init_watchdog(unsigned char interval);
#endif
