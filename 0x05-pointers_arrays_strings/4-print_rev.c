#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * @s: the string to revese
 */
void print_rev(char *s)
{
	int i;
	char *r;

	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (i = length - 1; i < 0; i++)
	{
		_putchar(r[i]);
	}
	_putchar('\n');
}
