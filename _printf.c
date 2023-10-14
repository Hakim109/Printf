#include "main.h"
/**
 * _printf - Function to hundel formated char
 * @format: formated char
 * @...: args to print
 * Return: count of args printed
 */
int _printf(const char *format, ...)
{
	int i, count_args = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format != '%')
			write(1, format, 1);
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				count_args += print_char(va_arg(args, int));
			}
			else if (format[i] == 's')
			{
				count_args += print_str(va_arg(args, const char *));
			}
			else if (format[i] == '%')
			{
				print_char('%');
				count_args++;
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				count_args += print_int(va_arg(args, int));
			}
		}
		else
		{
			print_char(format[i]);
			count_args++;
		}
	}
	va_end(args);
	return (count_args);
}
