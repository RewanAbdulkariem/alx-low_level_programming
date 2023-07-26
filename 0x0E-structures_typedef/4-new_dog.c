#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;
	
	return (dog);
}
