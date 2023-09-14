#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	unsigned long int term1 = 1;
	unsigned long int term2 = 2;
	unsigned long int next = 0;
	int i;

	for (i = 0; i < 98; i++)
	{
		next = term1 + term2;
		term1 = term2;
		term2 = next;
		printf("%lu", term2);

		if (i != 97)
		printf(", ");
	}
	printf("\n");
	return (0);
}
