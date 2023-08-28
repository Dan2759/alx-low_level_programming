#include "lists.h"

/**
 * listint_len - count the number of element in a linked list.
 * @h: a pointer of the head of linked list of type listint_t.
 *
 * Return: number of nodes of linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
