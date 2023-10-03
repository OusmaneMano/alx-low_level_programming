#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isalpha - checks if letter is lower or upper
 *
 * @c: detects alphabets
 *
 * Description: use _putchar to print
 *
 * Return: 1 if letter otherwise 0
 *
 */

int _isalpha(int c)
{
        int letter = 0;
        char alp;
        char ALP;

        for (alp = 'a'; alp <= 'z'; alp++)
        {
                for (ALP = 'A'; ALP <= 'Z'; ALP++)
                {
                        if (c == alp || c == ALP)
                        {
                                letter = 1;
                        }
                }
        }
        return (letter);
}
