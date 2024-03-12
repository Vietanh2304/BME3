#ifndef DISPLAY_APP_H
#define DISPLAY_APP_H

#include <TM1637Display.h>

extern TM1637Display display;

void display_clear();
void display_init();
void display_num();

#endif