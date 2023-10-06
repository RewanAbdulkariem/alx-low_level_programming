#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key string.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp, *prev;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	temp = ht->shead;
	prev = NULL;

	while (temp != NULL && strcmp(key, temp->key) > 0)
	{
		prev = temp;
		temp = temp->snext;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->sprev = prev;
	new_node->snext = temp;
	if (prev != NULL)
		prev->snext = new_node;
	else
		ht->shead = new_node;

	if (temp != NULL)
		temp->sprev = new_node;
	else
		ht->stail = new_node;
	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with
 * a key in a sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key to search for.
 *
 * Return: The value associated with the element,
 * or NULL if key couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	node = ht->shead;

	while (node != NULL && strcmp(key, node->key) > 0)
		node = node->snext;

	if (node != NULL && strcmp(key, node->key) == 0)
		return (node->value);

	return (NULL);
}

/**
* shash_table_print - Prints a sorted hash table.
* @ht: The sorted hash table.
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		flag = 1;
		node = node->snext;
	}
	printf("}\n");
}

/**
* shash_table_print_rev - Prints a sorted hash table in reverse order.
* @ht: The sorted hash table.
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		flag = 1;
		node = node->sprev;
	}
	printf("}\n");
}

/**
* shash_table_delete - Deletes a sorted hash table.
* @ht: The sorted hash table.
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node != NULL)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}

	free(ht->array);
	free(ht);
}
