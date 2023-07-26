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
	int name_len = 0;
	int owner_len = 0;
	int i;

	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		free(dog);
		return (NULL);
	}
	while (name[name_len] != '\0')
		name_len++;
	while (owner[owner_len] != '\0')
		owner_len++;
	dog->name = malloc((name_len + 1) * sizeof(char));
	dog->owner = malloc((owner_len + 1) * sizeof(char));

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
