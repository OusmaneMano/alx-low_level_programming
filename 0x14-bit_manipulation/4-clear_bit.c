#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: A pointer
 * @index: index
 * Return: Success(1) or (-1) if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}

