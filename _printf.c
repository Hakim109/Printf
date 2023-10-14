#include "main.h"
/**
 * _printf - Function to hundel formated char
 * @format: formated char
 * @...: args list
 * Return: count of args printed
 */
int _printf(const char *format, ...)
{
	int count_args;
	va_list args;

	if (!format || !format[0])
	{
		return (-1);
	}

	count_args = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count_args += handle_format(format, args);
			format = skip_format(format);
		}
		else
		{
			print_char(*format);
			count_args++;
		}
		format++;
	}
	va_end(args);
	return (count_args);
}
