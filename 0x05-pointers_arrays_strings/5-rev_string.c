#include "main.h"

/**
 * rev_string - a string, in reverse,
 * @s: the string to revese
 */
void rev_string(char *s)
{
	int i;
	int length = 0;
	char r[500];

	for (length = 0; s[length] != '\0'; length++)
	{}
	for (i = length - 1; i >= 0; i--)
	{
		r[length - 1 - i] = s[i];
	}
	for (i = 0; i < length ; i++)
	{
		s[i] = r[i];
	}
}

