#ifndef _MAIN_H
#define _MAIN_H

#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
void print_buffer(char buffer[], int *buff_ind);
#endif
