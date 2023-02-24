#include "main.h"

/**
 * Write a function that prints the alphabet, in lowercase
 * , followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alpha;
	for (alpha = 97; alpha <= 122; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');

}
