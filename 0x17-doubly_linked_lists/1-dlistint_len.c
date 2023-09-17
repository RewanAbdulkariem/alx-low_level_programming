#include "lists.h"
#include <stdio.h>

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
