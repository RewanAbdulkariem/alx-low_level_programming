#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: a string to be concatinated to
 * @src: a string to concatinate
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int l1 = 0, l2 = 0;

	while ( dest[l1++] != '\0')
	{
	}

	for (l2 = 0; src[l2] != '\0'; l2++, l1++)
	{
		dest[l1 - 1] = src[l2];
	}
	dest[l1] = '\0';
	return (dest);
}
