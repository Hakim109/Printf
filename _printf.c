#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - Function to hundel formated char
 * @format: formated char
 * @...: args to print
 *
 * Return: count of args printed
 */

int _printf(const char *format, ...)
{
	int i;
	int count_args = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
			{
				int c = va_arg(args, int);

				write(1, &c, 1);
				count_args++;
	}
			else if (format[i] == 's')
			{
				const char *str = va_arg(args, const char *);

				handle_string(str);
				count_args++;
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				count_args++;
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				count_args += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count_args++;
		}
	}

	va_end(args);
	return (count_args);
}
