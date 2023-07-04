#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: The head node's data (n) or
 * 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	n = (*head)->n;

	temp = *head;

	*head = (*head)->next;
	free(temp);

	return (n);
}
