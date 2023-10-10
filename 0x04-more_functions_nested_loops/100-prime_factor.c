#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 * number: 612852475143
 * Return: 0
 */

int main(void)
{
	long i, n, d;

	n = 612852475143;
	double s = sqrt(n);
	for (i = 0; i <= s; i++)
	{
		if ((n % i) == 0)
		{
			d = n / i;
		}
	}
		printf("%1ld\n", d);
		
		return (0);
}

