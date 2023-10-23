#include "lists.h"

/**
 * add_nodeint -adds a new node at the beginning of a list
 * @head: a pointer the address of the head
 * @n: integer of the new node
 * Return: The address of the new elements or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}


