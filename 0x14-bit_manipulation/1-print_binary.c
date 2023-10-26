#include "main.h"

/**
 * print_binary - prints the binary representation of the number
 * @n: number or binary to print
 */

void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned int a;

	for (i = 63; i >= 0; i--)
	{
		a = n >> i;
		if (a & 1)
		{
			_putchar('1');
			j++;
		}
		else if (a)
		{
			_putchar('0');
		}
	}
	if (!a)
		_putchar('0');
}

