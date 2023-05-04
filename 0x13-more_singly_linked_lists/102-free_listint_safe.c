#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;

	if (*h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		count++;
		if (current < current->next)
		{
			free(current);
			break;
		}
		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;
	return (count);
}
