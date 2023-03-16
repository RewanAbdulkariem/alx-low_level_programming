#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string using recursion
 * @s: pointer to string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * pand - helper function for checking if a string is a palindrome
 * @s: pointer to string
 * @l: length of string
 * Return: boolean (1 if palindrome, 0 if not)
 */
int pand(char *s, int l)
{
	if (l <= 1)
	{
		return (1);
	}

	if (*s == *(s + l-1))
	{
		return (pand(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome using recursion
 * @s: pointer to string
 * Return: boolean (1 if palindrome, 0 if not)
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pand(s, len - 1));
}
