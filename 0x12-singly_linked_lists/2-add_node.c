#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: The original linked list
 * @str: string to add to the node
 * Return: The address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int leng = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	while (str[leng])
		leng++;

	tmp->len = leng;
	tmp->str = strdup(str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
