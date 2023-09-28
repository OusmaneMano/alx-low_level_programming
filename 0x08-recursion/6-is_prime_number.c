#include "main.h"

int prime_num(int n, int i);

/**
 * is_prime_number - prime number or not
 * @n: input
 * Return: 1 if prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (prime_num(n, n - 1));
}

/**
 * prime_num - prime number
 * @n: input
 * @i: iteration
 * Return: 1 or 0
 */

int prime_num(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && n > 0)
	{
		return (0);
	}
	return (prime_num(n, i - 1));
}
