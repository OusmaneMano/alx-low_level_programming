#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: where is stored
 * @src: where is copied
 * @n: number of byte
 * Return: copy of the memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int t = n;

	for (; i < t; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

