#include "main.h"

/**
 * _strlen_recursion - print the length of a string
 * @s: input
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int leng = 0;

	if (*s)
	{
		leng++;
		leng += _strlen_recursion(s + 1);
	}
	return (leng);
}

