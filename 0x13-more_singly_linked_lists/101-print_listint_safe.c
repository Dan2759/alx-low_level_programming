#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: Pointer to the head of the listint_t linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *s = head, *f = head;

	while (s && f && f->next)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		s = s->next;
		f = f->next->next;

		if (s == f)
		{
			printf("-> [%p] %d\n", (void *)s, s->n);
			exit(98);
		}

		i++;
	}

	while (s)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		s = s->next;
		i++;
	}

	return (i);

}
