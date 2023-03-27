#include <stddef.h>

/**
 * print_name - take name and function.
 * and pass name to function.
 * @name: name of the person.
 * @f: pointer to a function.
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
