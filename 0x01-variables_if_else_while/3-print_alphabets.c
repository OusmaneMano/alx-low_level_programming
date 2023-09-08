#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz"
	char ALP[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	
	int i;

	for (i = 0; i < 26; i++)
		putchar(alp[i]);
		putchar(ALP[i]);
		putchar('\n');
		return (0);
}
