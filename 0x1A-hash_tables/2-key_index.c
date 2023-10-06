#include <stdlib.h>
#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: the key string.
 * @size: the size of the array of the hash table
 *
 * Return: the index at which the key/value pair stored in array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	hash_value = hash_djb2(key);
	index = hash_value % size;
	return (index);
}
