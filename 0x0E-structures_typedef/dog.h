#ifndef dog_h
#define dog_h
/**
 * struct dog - structure define the dog name and owner and its age
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
