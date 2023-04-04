#include"lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - A function that returns the number of elements in a
 * ------------- linked listint_t list.
 *  @h: pointer to head
 *  Return: number of lelements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		count++;
			current = current->next;
	}
	return (count);
}
