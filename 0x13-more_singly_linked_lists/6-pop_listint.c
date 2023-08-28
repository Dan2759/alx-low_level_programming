#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: Pointer to a pointer to the head of the listint_t linked list.
 *
 * Return: The data of the head node, or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head || !*head)
	{
		return (0);
	}

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}
