#include <unistd.h>
/**
 * _putchar - prints
 * Return: 0
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

