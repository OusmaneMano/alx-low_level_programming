#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char al;

	for (i = 0; i <= 10; i++)
	{

		for (al = 'a'; al <= 'z'; al++)
		{
		_putchar(al);
		}
		_putchar('\n');
	}
}

