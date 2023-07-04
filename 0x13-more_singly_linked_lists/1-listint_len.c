#include"lists.h"
/**
 * listint_len - list length
 * @h: pointer to head
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
