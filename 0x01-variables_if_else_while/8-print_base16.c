#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = '0'; i < '10'; i++)
	putchar(i);
	for (i = '10'; i <= '16'; i++)
	putchar(i);
	putchar('\n');
	return (0);
}

