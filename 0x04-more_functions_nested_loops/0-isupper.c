#include "main.h"
/**
 * _isupper - check of uppercase
 * Description: use _putchar to print
 * @c: detect alphabet
 * Return: 1 is upper otherwise 0
 */

int _isupper(int c)
{

	if (c == 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

