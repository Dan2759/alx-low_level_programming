#include "lists.h"

/**
 * free_listint - frees a listint_t linked list.
 * @head: Pointer to the head of the linked list of type listint_t.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
