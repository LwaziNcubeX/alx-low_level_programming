#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dog - Frees a dog_t struct and its contained data.
 * @d: Pointer to dog_t struct to free.
 *
 * Return: None.
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
