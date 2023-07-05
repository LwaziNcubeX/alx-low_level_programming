#include "lists.h"
/**
 * insert_nodeint_at_index - insets a new node
 * @head: pointer to head
 * @idx: index of list
 * @n: assigned int value
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current; /*should i use current or temp ?*/
	unsigned int count = 0;
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL); /* when malloic fails */
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL || idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	current = *head;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = current->next;
	current->next = newNode;

	return (newNode);
}
