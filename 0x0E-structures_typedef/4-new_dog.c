#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog, or NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

/* Allocate memory for new dog */
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

/* Allocate memory for name */
	name_copy = malloc(strlen(name) + 1);

	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

/* Allocate memory for owner */
	owner_copy = malloc(strlen(owner) + 1);

	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}

/* Copy name and owner strings to new memory locations */
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

/* Set new dog properties */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

/* Return new dog */
	return (new_dog);
}
