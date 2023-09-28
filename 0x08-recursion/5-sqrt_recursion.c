#include "main.h"

int actual_rec(int n, int i);

/**
 * _sqrt_recursion - the natural square root of a number
 * @n: input
 * Return: the square
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_rec(n, 0));
}

/**
 * actual_rec - calculate natural square root
 * @n: input
 * @i: iteration
 * Return: square root
 */

int actual_rec(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_rec(n, i + 1));
}
