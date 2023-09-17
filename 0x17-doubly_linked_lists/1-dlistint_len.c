#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - Counts the number of elements in a doubly linked list
 * @h: A pointer to the head of the doubly linked list
 * Return: The number of elements in the doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	unsigned int n;

	current = h;
	n = 0;
	for (n = 0; current != NULL; n++)
		current = current->next;
	return (n);
}
