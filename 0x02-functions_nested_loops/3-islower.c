#include "main.h"
/**
 * _islower : write a function that checks for lowercase
 *
 * Return: 1 if c is lowercase else 0
 */

int _islower(int c)
{
	char al;
	int low = 0;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al == c)
		{
			low = 1;
		}
	}
		return (low);
}

