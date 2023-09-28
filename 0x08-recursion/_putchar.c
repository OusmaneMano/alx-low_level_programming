#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints
 * @c: parameter
 * Return: 0
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

