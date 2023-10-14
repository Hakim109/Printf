#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
void handle_string(const char *str);
void handle_int(int num);
int print_int(int num);
int print_str(const char *str);
int print_char(int c);

#endif
