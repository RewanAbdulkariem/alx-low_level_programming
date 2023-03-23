#include <stddef.h>
/**
 * array_iterator - execute function on each element
 * of an array
 * @array: given array
 * @size: size of the array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action != NULL)
	{
		for (i = 0; i < (int)size; i++)
			action(array[i]);
	}
}
