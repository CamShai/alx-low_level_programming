#include "lists.h"

/**
 * reverse_listint - Reverse listint_t linked list.
 * @head: Pointer to a pointer to the first node of the list.
 *
 * Return:  pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
