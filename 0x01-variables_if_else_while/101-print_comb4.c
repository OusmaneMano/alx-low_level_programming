#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int l, m, n;

	for (l = '0'; l < '9'; l++)
	{
	for (m = l + 1; m <= '9'; m++)
	{
	for (n = m + 1; n <= '9'; n++)
	{
	if ((m != l) != n)
	{
	putchar(l);
	putchar(m);
	putchar(n);
	if (l == '7' && m == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

