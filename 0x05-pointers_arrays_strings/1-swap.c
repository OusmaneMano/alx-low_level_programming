#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: value one
 * @b: value two
 * Return: value one and two
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

