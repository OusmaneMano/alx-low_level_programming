#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the lements of a list_t
 * @h: The list_t list
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		node++;
		h = h->next;
	}
	return (node);
}
