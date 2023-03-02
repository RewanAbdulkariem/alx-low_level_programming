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
 	int i;
 	
 	while ( dest[l1++] != '\0')
 	{	}
 	while ( src[l2++] != '\0')
 	{	}
 	
 	for (i = l1; i < l1 + l2 - 1;i++)
 	{
 		dest[i] = src[i - l1];
 	}
 }
