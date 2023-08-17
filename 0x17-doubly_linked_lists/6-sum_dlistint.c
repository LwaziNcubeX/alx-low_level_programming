#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n)
 * @head: A pointer to the head
 *
 * Return: The sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
