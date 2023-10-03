#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _abs - Computes the absolute values of the integer
 *
 * Description: absolute numbers
 *
 *@r: detects number
 *
 * Return: always 1 (success)
 *
 */

int _abs(int r)
{

        if (r >= 0)
                return (r);
        else
                return (r * -1);
}
