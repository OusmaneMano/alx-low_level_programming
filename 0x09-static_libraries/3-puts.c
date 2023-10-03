#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _puts - function name
 * @str: function parameter
 */
void _puts(char *str)
{
                int e;

                for (e = 0; str[e] != '\0'; e++)
                {
                _putchar (str[e]);
                }
                _putchar ('\n');
}
