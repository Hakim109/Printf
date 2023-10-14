#include "main.h"
/**
 * handle_int - function to hundle int
 * @num: take argumenet int
 *
 * Return: void
 */
int handle_int(int num)
{
	char buffer[1024];
	int len = snprintf(buffer, sizeof(buffer), "%d", num);

	if (len > 0)
	{
		write(1, buffer, len);
		return (len);
	}
	else
		return (-1);
}
