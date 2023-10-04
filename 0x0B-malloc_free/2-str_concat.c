#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatanates two strings
 * @s1: string one to concate
 * @s2: string two to concate
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		return ("");

	if (s2 == NULL)
		return ("");

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;
	conct = malloc((sizeof(char) * l) + 1);

	if (conct == NULL)
		return (NULL);

	j = 0;
	while (k < l)
	{
		if (k <= i)
		conct[k] = s1[k];

		if (k >= i)
		{
		conct[k] = s2[j];
		j++;
		}
	k++;
	}
	conct[k] = '\0';
	return (conct);
}

