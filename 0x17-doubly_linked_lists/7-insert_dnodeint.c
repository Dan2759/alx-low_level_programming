#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the pointer to the head of the list.
 * @idx: Index where the new node should be added (index starts at 0).
 * @n: Value to be stored in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *head = *h;
	unsigned int i;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	for (i = 1; head && i < idx; i++)
		head = head->next;

	if (!head && i < idx)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = head->next;
	new_node->prev = head;

	if (head->next)
		head->next->prev = new_node;

	head->next = new_node;

	return (new_node);
}
