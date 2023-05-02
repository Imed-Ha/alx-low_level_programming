#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list
 *
 * @head: Pointer to pointer to the beginning of the list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *current, *next;
	size_t count = 0;

	if (!head || !*head)
		return (0);

	current = *head;
	*head = NULL;

	while (current)
	{
		next = current->next;
		free(current);
		count++;

		if (next >= current)
			break;

		current = next;
	}

	return (count);
}
