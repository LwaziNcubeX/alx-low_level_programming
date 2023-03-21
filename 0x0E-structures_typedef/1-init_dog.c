#include <stddef.h>
#include "dog.h"
/**
 * init_dog - initializes a struct dog variable
 * @d: pointer to the struct dog variable to initialize
 * @name: pointer to the character array containing the name of the dog
 * @age: the age of the dog
 * @owner: pointer to the character array containing the name of the owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
