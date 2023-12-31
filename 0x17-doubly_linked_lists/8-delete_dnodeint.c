#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position
 * @head: Pointer to the pointer to the head of the list.
 * @index: Index of the node to delete (starting at 0).
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;
	dlistint_t *h2;
	unsigned int i = 0;

	h1 = *head;

	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;

	while (h1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				free(h1);
				h2->next = h1->next;

				if (h1->next != NULL)
					h1->next->prev = h2;
			}
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		i++;
	}

	return (-1);
}
