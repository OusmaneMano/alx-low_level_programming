#include "main.h"
/**
 * print_sign - prints the signof the number
 *
 * Description: use _putchar to print
 *
 * @n: detects numbers
 *
 * Return: 1 is greater 0 if neg otherwise -1
 *
 */

int print_sign(int n)
{
	int neg = -1;
	char ch = (char) neg;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (ch);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

