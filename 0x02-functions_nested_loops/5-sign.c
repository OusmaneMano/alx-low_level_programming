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
	int number = 0;

	if (n > 0)
	{
		number = 1;
	}
	else if (n < 0)
	{
		number = -1;
		_putchar("+");
	}
	else
	{
		return (number);
		_putchar("0");
	}
}

