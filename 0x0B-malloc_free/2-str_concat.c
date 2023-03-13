#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
 char *str_concat(char *s1, char *s2)
 {
 	char *strout;
	unsigned int len1, len2, limit, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
		
	strout = malloc(sizeof(char) * (len1 + len2 + 1));
	
	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (k = 0; k < len1; k++)
		strout[k] = s1[k];

	limit = len2;
	for (len2 = 0; len2 <= limit; len1++, len2++)
		strout[len1] = s2[len2];

	return (strout);
 }
