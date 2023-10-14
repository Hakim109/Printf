#include "main.h"

/**
 * print_str - function to hundle int
 * @str: pointer to string
 * Return: 0
 */
int print_str(char *str)
{
	handle_string(str);
	return (0);
}
/**
 * spe_format - checks if a character is a valid format
 * @c: the character to check
 * Return: 1 if valid format, 0 otherwise
 */
int spe_format(char c)
{
	return (c == 'c' || c == 's' || c == '%' || c == 'd' || c == 'i');
}
/**
 * skip_format - advances the format string to the next specifier
 * @format: pointer to the current format specifier
 * Return: pointer to the next format specifier
 */
const char *skip_format(const char *format)
{
	while (*format && !spe_format(*format))
		format++;
	return (format);
}
