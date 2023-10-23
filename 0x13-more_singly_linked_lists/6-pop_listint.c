#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: A pointer to the head
 * Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *t;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	t = *head;
	*head = (*head)->next;
	free(t);
	return (n);
}
