#include "main.h"
/**
*handle_string - Function to handle the %s format specifier
*@str: pointer to string.
*
*Return: void.
*/
int handle_string(char *str)
{
	int count = 0;

	if (str == NULL)
	{
		char *n = "(null)";

		while (*n)
		{
			print_char(*n);
			n++;
			count++;
		}
		return (count);
	}
	else
	{
		while (*str)
		{
			print_char(*str);
			str++;
			count++;
		}
	}
	return (count);
}
