#include "main.h"
/**
 * handle_int - function to hundle int
 * @num: take argumenet int
 *
 * Return: void
**/
int handle_int(int num)
{
	int i;
	char buffer[12];
	int count = 0;
	int s, e;

	if (num < 0)
	{
		print_char('-');
		num = -num;
	}
	if (num == 0)
	{
		buffer[count] = '0';
		count++;
	}
	while (num > 0)
	{
		int j = num % 10;

		buffer[count] = j + '0';
		count++;
		num = num / 10;
	}
	s = 0;
	e = count - 1;
	while (s < e)
	{
		char aux = buffer[s];

		buffer[s] = buffer[e];
		buffer[e] = aux;
		s++;
		e--;
	}
	buffer[count] = '\0';
	for (i = 0; i < count; i++)
	{
		print_char(buffer[i]);
	}
	return (count);
}
