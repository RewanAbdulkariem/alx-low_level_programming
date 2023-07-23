#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: mimum number in the array
 * @max: maxmum number in the array
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
