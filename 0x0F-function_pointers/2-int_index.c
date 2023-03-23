#include <stddef.h>
/**
 * int_index - searches for an integer
 * @array: array with data
 * @size: the number of elements in the array 
 * @cmp: pointer to the function to be used to compare values
 * Return: count of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
