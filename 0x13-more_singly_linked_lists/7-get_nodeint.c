#include "lists.h"
/**
 * get_nodeint_at_index - the nth node of a linked list.
 *
 * @head: head The head of the linked list
 * @index: index The index of the node to retrieve (starting from 0)
 * Return: the nth node or NULL if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
