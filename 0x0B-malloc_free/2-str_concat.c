#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatanates two strings
 * @s1: string one to concate
 * @s2: string two to concate
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, i2;

	if (s1 == NULL)
		return ("");

	if (s2 == NULL)
		return ("");

	i = i2 = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[i2] != '\0')
		i2++;
	conct = malloc(sizeof(char) * (i + i2 + 1));

	if (conct == NULL)
		return (NULL);

	i = i2 = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[i2] != '\0')
	{
		conct[i] = s2[i2];
		i++, i2++;
	}
	conct[i] = '\0';
	return (conct);
}

