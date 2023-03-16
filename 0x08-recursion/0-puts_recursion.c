#include "main.h"
/**
 * _puts_recursion - print a string.
 * @s: pointer to char
 * Return: No.
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
		_putchar('\n');
	else
		_puts_recursion(++s);
}
