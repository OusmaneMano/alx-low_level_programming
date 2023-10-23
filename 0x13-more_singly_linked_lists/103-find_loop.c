#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: A pointer to the head
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t, *h;

	if (head == NULL || head->next == NULL)
		return (NULL);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = h;
			while (t != h)
			{
				t = t->next;
				h = h->next;
			}
			return (t);
		}
		t = t->next;
		h = (h->next)->next;
	}
	return (NULL);
}

