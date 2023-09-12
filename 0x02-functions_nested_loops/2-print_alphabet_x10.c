#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 *
 * Return: void 
 */

void print_alphabet_x10(void)
{
	int i;

	while (i <= 10)
	{
		char al;

		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
		i++;
	}
}

