#include "lists.h"
#include <stdio.h>

/**
 * print_listeint - prints all the elements of a list
 * @h: pointer to the head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
