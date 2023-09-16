#include <stdio.h>
/**
 * main - Entry point
 * number: 612852475143
 * Return: 0
 */

int main(void)
{
	long int i, n, d;

	n = 612852475143;
	for (i = 0; i <= n; i++)
	{
		if ((n % i) == 0)
		{
			if (n == i)
			{
				printf("%1ld\n", i);
				break;
			}
			d = n / i;
			n = d;
		}
	}
	return (0);
}

