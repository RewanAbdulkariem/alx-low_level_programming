#include "lists.h"
/**
 * list_len - the number of elements in a linked.
 * @h: pointer to the list_t list to print.
 * Return: the number of nodes printed
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;
	
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
