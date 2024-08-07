#include <stdio.h>
#include <stddef.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t blocksize, start, end;
	size_t i;


	if (array == NULL || size == 0)
		return (-1);

	blocksize = sqrt(size);
	start = 0;
	end = blocksize;

	printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	while (end < size && array[end] < value)
	{
		start = end;
		end += blocksize;

		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	}

	printf("Value found between indexes [%lu] and [%ld]\n", start, end);

	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
