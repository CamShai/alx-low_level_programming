#include "lists.h"

/**
 * print_listint_safe - print a listint_t linked list.
 * @head: head of the linked list
 *
 * Return:  number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *tmp;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		tmp = current;
		current = current->next;

		if (tmp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}
	return (count);
}
