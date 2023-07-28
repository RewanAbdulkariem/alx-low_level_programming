#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: The list_t list.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	int i;
	
	const list_t *currentNode = h;
	
	for(i = 0; currentNode != NULL; i++)
	{
		if (currentNode->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n",currentNode->len , currentNode->str);
		currentNode = currentNode -> next;
	}
	nodes = i;
	return (nodes);
}
