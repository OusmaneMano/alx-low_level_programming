#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	unsigned long int term1 = 0;
	unsigned long int term2 = 1;
	unsigned long int next = 0;
	int i = 0;


	while (i < 98)
	{
		next = term1 + term2;
		term1 = term2;
		term2 = next;
		printf("%lu", next);

		if (i != 97)
		printf(", ");

		i++;
	}
	printf("\n");
	return (0);
}
