#include "main.h"
/**
*handle_string - Function to handle the %s format specifier
*@str: pointer to string.
*
*Return: void.
*/
void handle_string(const char *str)
{
	if (str == NULL)
	{
		char *n = "(null)";

		while (*n)
		{
			_putchar(*n);
			n++;
		}
	}
	else
	{
		while (*str)
		{
			_putchar(*str);
			str++;
		}
	}
}
