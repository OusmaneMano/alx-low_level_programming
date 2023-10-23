#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: A pointer to the adrress of the head
 * Description: set the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;

	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}
	head = NULL;
}

