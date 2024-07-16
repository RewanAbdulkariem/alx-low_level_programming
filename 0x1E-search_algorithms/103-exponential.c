#include <stdio.h>
#include <stddef.h>
#include <math.h>

/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t step, low, high, i, mid;

	step = 1;
	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (step < size && array[step] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		step = step * 2;
	}
	low = step / 2;
	if (step > size - 1)
		step = size - 1;
	high = step;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
