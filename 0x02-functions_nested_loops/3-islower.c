#include "main.h"
/**
 * _islower - detects lowercase and uppercase
 *
 * @c: collect alphabets
 *
 * Description: use _putchar to print
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

