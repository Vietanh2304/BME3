#ifndef DISPLAY_APP_H
#define DISPLAY_APP_H

#include <TM1637Display.h>

extern TM1637Display display;

void display_clear();
void display_init();
void display_num(int x,uint8_t dot, bool leading_zeros, uint8_t lenght, uint8_t pos );

#endif
