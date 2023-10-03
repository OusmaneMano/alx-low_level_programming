#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
        for (; *haystack != '\0'; haystack++)
        {
                char *o = haystack;
                char *t = needle;

                while (*o == *t && *t != '\0')
                {
                        o++;
                        t++;
                }
                if (*t == '\0')
                {
                        return (haystack);
                }
        }
                return (NULL);
}
