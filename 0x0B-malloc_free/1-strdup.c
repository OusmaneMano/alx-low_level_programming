#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ous;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	ous = malloc(sizeof(char) * (i + 1));

	if (ous == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		ous[r] = str[r];

	return (ous);
}
