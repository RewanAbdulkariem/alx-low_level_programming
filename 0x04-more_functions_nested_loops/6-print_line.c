#include <stdio.h>
#include "main.h"

/**
 * print_line - Print line dependent on the integer n.
 * @n : The number of '_' characters to use
 * Return: Void.
 */
void print_line(int n)
{
	int i;
        
	i = 0;
        
	while (i < n)
	{
	_putchar('_');
	i++;
	}
	_putchar('\n');
}
