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
	size_t count = 0, rev_count = 0;

	current = head;
	while (current)
	{
		runner = head;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current -> next;
		count++;

		while(count > rev_count)
		{
			if (runner == current)
			{
				printf("-> [%p] %d\n", (void *)runner, runner->n);
				return (count);
			}
			rev_count++;
			runner = runner->next;
		}
		rev_count = 0;
	}
	return (count);
}
