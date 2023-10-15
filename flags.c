#include "main.h"
/**
 * get_flag - checkwitch flags
 * @s: flag char
 * @f: pointer to the struct
 * Return: 1 if succes, 0 otherwise
 */
int get_flag(char s, flags_t *f)
{
	int i = 0;

	if (s == '+')
	{
		f->plus = 1;
		i = 1;
	}
	else if (s == ' ')
	{
		f->space = 1;
		i = 1;
	}
	else if (s == '#')
	{
		f->hash = 1;
		i = 1;
	}
	return (i);
}
