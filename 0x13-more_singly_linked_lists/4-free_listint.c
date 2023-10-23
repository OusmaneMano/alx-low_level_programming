#include "lists.h"

/**
 * free_listint - frees a list
 * @head: A pointer to the head to be free
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}

