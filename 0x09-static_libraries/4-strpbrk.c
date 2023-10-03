#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - Entry
 * @s: input
 * @accept: accept
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
        int i;

        while (*s)
        {
        for (i = 0; accept[i]; i++)
        {
                if (*s == accept[i])
                {
                        return (s);
                }
        }
        s++;
        }
        return ('\0');
}
