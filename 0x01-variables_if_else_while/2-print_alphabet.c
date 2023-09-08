#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char i;
	for(i = 'a'; i <= 'z'; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
}

