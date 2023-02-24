#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet.
 *
 */
void print_alphabet_x10(void)
{
	short i = 0;
	while (i < 10)
	{
		char alpha;
		i++;
		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
