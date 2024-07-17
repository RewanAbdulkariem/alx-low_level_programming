#include <stdio.h>
#include <stddef.h>
#include <math.h>
/**
 * advanced_binary_recursive - performs binary search recursively
 * @array: a pointer to the first element of the array to search in
 * @low: the lowest index to search in array
 * @high: the highest index to search in array
 * @value: the value to search for
 * Return: the index of the first occurrence of value, or -1 if not found
 */
int advanced_binary_recursive(int *array, int low, int high, int value)
{
	int mid, i;

	if (low > high)
		return (-1);

	mid = low + (high - low) / 2;

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[high]);

	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] < value)
			return (mid);
		else
			return (advanced_binary_recursive(array, low, mid, value));
	}
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, high, value));
	else
		return (advanced_binary_recursive(array, low, mid - 1, value));
}
/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	int result;

	if (array == NULL || size == 0)
		return (-1);
	result = advanced_binary_recursive(array, 0, size - 1, value);

	return (result);
}
