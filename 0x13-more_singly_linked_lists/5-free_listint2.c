#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list and sets head to NULL.
 * @head: Pointer to a pointer to the head of the listint_t linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
