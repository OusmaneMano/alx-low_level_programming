#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of src string
 * Return: two string + number
 */

char *_strncat(char *dest, char *src, int n)
{
	int leng_d, i;

	for (leng_d = 0; dest[leng_d] != '\0'; leng_d++)
	{
	}
	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[leng_d + i] = src[i];
	}
	return (dest);
}

