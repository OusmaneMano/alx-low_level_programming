#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from 0 to 98
 *
 * @n: number
 *
 * Return: always 0
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
		if (n == 98)
		{
			_putchar(n);
			_putchar('\n');
		}
		else
		{
			_putchar(n);
			_putchar(44);
			_putchar(32);
		}
	}
	}
	else
	{
	for (; n <= 98; n--)
	{
	if (n == 98)
	{
	_putchar(n);
	_putchar('\n');
	}
	else
	{
	_putchar(n);
	_putchar(44);
	_putchar(32);
	}
	}
	}
}

