#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int coun = 0;
	int t = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		coun++;
	}
	t = coun - 1;
	for (i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

