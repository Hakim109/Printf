#include "main.h"

/**
 * handle_format - handles specific format specifiers
 * @format: pointer to the current format specifier
 * @args: va_list containing the arguments
 *
 * Return: the number of characters printed
 */
int handle_format(const char *format, va_list args)
{
	char *str, c;
	int count_args = 0, num;

	if (*format == 'c')
	{
		c = va_arg(args, int);
		print_char(c);
		count_args++;
	}
	else if (*format == 's')
	{
		str = va_arg(args, char *);
		count_args += handle_string(str);
	}
	else if (*format == 'd' || *format == 'i')
	{
		num = va_arg(args, int);
		count_args += handle_int(num);
	}
	else if (*format == '%')
	{
		print_char('%');
		count_args++;
	}
	return (count_args);
}
