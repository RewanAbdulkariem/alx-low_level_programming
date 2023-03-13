#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
 char *create_array(unsigned int size, char c)
 {
 	char* arr;
 	unsigned int i = 0;
 	
 	if (size == 0)
 		return (NULL);

 	arr = malloc(sizeof(char) * size);
 	
 	if (arr == NULL)
 		return (NULL);
 	
	for (i = 0; i < size; i++)
		arr[i] = c;
	
	return (arr);
 }
