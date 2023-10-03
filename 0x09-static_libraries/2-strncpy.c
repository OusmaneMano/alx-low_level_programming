#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: number
 * Return: copy of string
 */

char *_strncpy(char *dest, char *src, int n)
{
        int i;

        for (i = 0; src[i] != '\0' && i < n; i++)
        {
                dest[i] = src[i];
        }
        for (i = i; i < n; i++)
        {
                dest[i] = '\0';
        }
        return (dest);
}
