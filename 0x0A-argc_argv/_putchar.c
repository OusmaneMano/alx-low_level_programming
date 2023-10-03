#include "main.h"
#include <stdio.h>

/**
 * _putchar - entry point
 * @c: input
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
