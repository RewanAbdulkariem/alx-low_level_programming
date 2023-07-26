#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog data
 * @d: structure named d
 */
void print_dog(struct dog *d)
{
	char *name = "(nil)";
	char *owner = "(nil)";

	if (d)
	{
		if (d->name)
		{
			name = d->name;
		}
		if (d->owner)
		{
			owner = d->owner;
		}
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
	}
}
