#include "lists.h"
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *currentNode;
	list_t *newNode;

	currentNode = *head;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	;

	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	currentNode = *head;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
	}
	currentNode->next = newNode;


	return (newNode);
}
