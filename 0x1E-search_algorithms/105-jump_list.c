#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers using
 * the Jump search algorithm.
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 * Return: a pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step, i;
	listint_t *current, *prev;

	if (list == NULL || size == 0)
		return (NULL);

	jump_step = sqrt(size);
	current = list;
	prev = NULL;

	while (current->index < size - 1 && current->n < value)
	{
		prev = current;
		for (i = 0; i < jump_step && current->next != NULL; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	prev->index, current->index);

	while (prev != NULL && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
