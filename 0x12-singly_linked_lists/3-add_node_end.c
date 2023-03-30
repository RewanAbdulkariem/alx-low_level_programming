#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	last = *head;
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	new_node->len = strlen(str);
	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;


	last->next = new_node;
	return (NULL);
}
