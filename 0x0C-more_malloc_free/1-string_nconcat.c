#include <stdlib.h>
#include "main.h"
/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */
unsigned int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenate s1 and n bytes of s2; return s3 to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 * If the function fails, it should return NULL
 */
 char *string_nconcat(char *s1, char *s2, unsigned int n)
 {
 	char *s3;
 	unsigned int i, j, len;

 	if (!s1)
 		s1 = " ";
 	if (!s2)
 		s2 = " ";
 	if (n >= _strlen(s2))
		n = _strlen(s2);

 	len =  _strlen(s1) + n;
 	s3 = malloc(len * sizeof(char));
 	if (!s3)
 		return (NULL);

 	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	for (j = 0; j < n; j++)
		s3[i + j] = s2[j];
	s3[i + j] = '\0';

	return (s3);
 }
