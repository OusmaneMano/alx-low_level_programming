#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: A pointer to the address of the new node
 * @n: integer of new node
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newN, *last;

	newN = malloc(sizeof(listint_t));
	if (newN == NULL)
		return (NULL);

	newN->n = n;
	newN->next = NULL;

	if (*head == NULL)
		*head = newN;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newN;
	}
	return (*head);
}

