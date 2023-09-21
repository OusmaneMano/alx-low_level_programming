#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: string
 * Return: coded string
 */

char *rot13(char *str)
{
	int i, j;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXUZABCDEFGHIJKLMnopqrstuvwxyzabcdefjhijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = r[j];
				break;
			}
		}
	}
	return (str);
}

