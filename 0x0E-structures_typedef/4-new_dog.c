#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i;
	
	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		free(dog);
		return (NULL);
	}

	dog->name = malloc(sizeof(name));
	dog->owner = malloc(sizeof(owner));

	if (!dog->name || !dog->owner)
	{
		free(dog->name), free(dog->owner), free(dog);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
	{
		dog->name[i] = name[i];
	}
	dog->name[i] = '\0';
	for (i = 0; owner[i]; i++)
	{
		dog->owner[i] = owner[i];
	}
	dog->owner[i] = '\0';
	dog->age = age;

	return (dog);
}
