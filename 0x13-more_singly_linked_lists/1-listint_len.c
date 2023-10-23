#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked list
 * @h: A pointer to the head
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}

