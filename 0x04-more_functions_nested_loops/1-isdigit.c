#include "main.h"
/**
 * _isdigit - Entry point
 * @c: detect number
 * Description: use _putchar to print
 * Return: 1 if number otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
