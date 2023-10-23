#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: A pointer to the first element
 * @index: node
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
