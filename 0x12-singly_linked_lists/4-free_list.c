#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: head of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *cur_node;

	while ((cur_node = head) != NULL)
	{
		head = head->next;
		free(cur_node->str);
		free(cur_node);
	}
}

