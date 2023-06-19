#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dog - Frees a dog
 * @d: Pointer to dog_t struct to free.
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
