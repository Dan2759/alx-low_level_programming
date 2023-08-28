#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t linked list.
 * @h: a pointer of the head of linked list of type of listint_t.
 *
 * Return: number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
