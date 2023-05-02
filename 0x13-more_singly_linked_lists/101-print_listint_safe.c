#include "lists.h"

/**
 * print_listint_safe - Prints a linked list of integers
 *                      and ensures against infinite loops
 * @head: Pointer to the beginning of the linked list
 *
 * Return: Number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0;

	if (!head)
		exit(98);

	current = head;
	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		if (current >= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}
		current = current->next;
	}

	return (count);
}
