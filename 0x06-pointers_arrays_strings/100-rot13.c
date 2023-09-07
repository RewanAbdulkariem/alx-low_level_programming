#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @s: The input string to encode.
 * Return: The encoded string.
 */
char *rot13(char *s)
{
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_map = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	for (i = 0; s[i]; i++)
	{
		char *ptr = alpha;

		while (*ptr)
		{
			if (s[i] == *ptr)
			{
				s[i] = rot13_map[ptr - alpha];
				break;
			}
			ptr++;
		}
	}
	return (s);
}

