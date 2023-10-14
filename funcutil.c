#include "main.h"
/**
 * print_char - function to print char
 * @c: char to print
 *
 * Return: char
 */

int print_char(int c)
{
	return (write(1, &c, 1));
}
/**
 * print_str - function to hundle int
 * @str: pointer to string
 *
 * Return: 0
 */
int print_str(const char *str)
{
	handle_string(str);
	return (0);
}
/**
 * print_int - function take arg int
 * @num: argumenet
 *
 * Return: number
 */
int print_int(int num)
{
	handle_int(num);
	return (snprintf(NULL, 0, "%d", num));
}
