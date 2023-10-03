#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcat - concatenayes two strings
 * @dest: first string
 * @src: second string
 * Return: two strings
 */

char *_strcat(char *dest, char *src)
{
        int leng1, leng2, i;

        for (leng1 = 0; dest[leng1] != '\0'; leng1++)
        {
        }
        for (leng2 = 0; src[leng2] != '\0'; leng2++)
        {
        }
        for (i = 0; i <= leng1; i++)
        {
                dest[leng1 + i] = src[i];
        }
        return (dest);
}

