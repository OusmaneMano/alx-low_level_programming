#include "main.h"

/**
 * get_bit - The value of a bit at a given index
 * @n: number of index
 * @index: index
 * Return: The value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);
	i = (n >> index) & 1;
	return (i);
}
