#include "main.h"
#include <stdlib.h>
/* 
 * _strdup -  function returns a pointer to a new string which is a duplicate of the string.
 * @str: string
 *
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int len, j;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++);

	strout = (char *)malloc(sizeof(char) * (len + 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= len; j++)
		strout[j] = str[j];

	return (strout);
}
