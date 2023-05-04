#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *runner;
	size_t count = 0;

	current = head;
	while (current)
	{
		runner = current->next;
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (runner >= current)
		{
			printf("-> [%p] %d\n", (void *)runner, runner->n);
			break;
		}
		current = runner;
	}
	return (count);
}
