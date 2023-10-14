#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int handle_string(char *str);
int handle_int(int num);
int print_int(int num);
int print_str(char *str);
int print_char(int c);
const char *skip_format(const char *format);
int spe_format(char c);
int handle_format(const char *format, va_list args);

#endif
