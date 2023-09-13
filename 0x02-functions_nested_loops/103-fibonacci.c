#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int limit = 4000000;
	int term1 = 1;
	int term2 = 2;
	int i;
	int sum = 2;
	int next;

	for (i = 1; i <= limit; i++)
	{
		next = term1 + term2;
		if ((i % 2) == 0)
			sum += next;
		term1 = term2;
		term2 = next;
	}
	printf("%d\n", sum);
	return (0);
}

