#include "main.h"
/**
 * puts_half - prints half of string
 * @str: input
 * Return: half of string
 */

void puts_half(char *str)
{
	int i, m, longi;

	longi = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		longi++;
	}
	m = longi / 2;
	if ((m % 2) == 1)
	{
		m = (longi + 1) / 2;
	for (i = m; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}


