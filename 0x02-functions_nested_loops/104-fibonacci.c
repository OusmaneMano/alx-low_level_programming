#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int term1 = 1;
	int term2 = 2;
	int next;

	printf("%d, ", term1);
	while (next <= 98)
	{
		printf("%d", term2);
		next = term1 + term2;
		term1 = term2;
		term2 = next;
		if (next != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
