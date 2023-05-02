#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of  linked list.
 * @head: pointer to a pointer to the head node of  linked list.
 * @index: index of the node to delete.
 *
 * Return: 1 if success,  -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	prev = NULL;
	current = *head;
	for (i = 0; current && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (!current)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}
