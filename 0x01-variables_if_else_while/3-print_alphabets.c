#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char i;
	char I;

	for (i = 'a'; i < 'z'; i++)
	for (I = 'A'; I < 'Z'; I++)
		putchar(i);
		putchar(I);
		putchar('\n');
		return (0);
}

