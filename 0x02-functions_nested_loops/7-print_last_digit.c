#include "main.h"
/**
 * print_last_digit - print last digit of number
 *
 * Description: use _putchar to print
 *
 * @r: number
 *
 * Return: %10 of numbers
 *
 */

int print_last_digit(int r)
{

	int m;

	if (r > 0)
	{
		m = r % 10;
	}
	else
	{
		m = -1 * r % 10;
	}
	_putchar((m % 10) + '0');
	return (m % 10);
}

