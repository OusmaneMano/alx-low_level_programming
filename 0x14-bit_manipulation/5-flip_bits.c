#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to anothe
 * @n: started number
 * @m: ended number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, round = 0;
	unsigned long int prev, ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		prev = ex >> i;
		if (prev & 1)
			round++;
	}
	return (round);
}

