#include "main.h"
#include <stdlib.h>
/**
  * _calloc - Entry pint
  * @nmemb: number of memory bytes
  * @size: number of data type bits
  * Return: return pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}

