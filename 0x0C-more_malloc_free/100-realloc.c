#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocate a memory block using malloc
 * @ptr:  pointer to the memory previously allocated 
 * @old_size: the size of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to new memory space, NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size > old_size)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
