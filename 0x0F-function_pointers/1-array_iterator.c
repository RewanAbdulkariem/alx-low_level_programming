#include <stddef.h>
/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element
 * @array: given array
 * @size: size of the array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < (int)size; i++)
			action(array[i]);
	}
}
