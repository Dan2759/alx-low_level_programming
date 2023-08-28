#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node in a linked list at a certain index
 * @head: Pointer to a pointer to the head of the listint_t linked list.
 * @index: Index of the node to be deleted, starting at 0.
 *
 * Return: 1 (Success), or -1 (Fail).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *current;

	if (!head || !*head)
	{
		return (-1);
	}

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp && i < index - 1; i++)
		temp = temp->next;

	if (!temp || !(temp->next))
	{
		return (-1);
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
