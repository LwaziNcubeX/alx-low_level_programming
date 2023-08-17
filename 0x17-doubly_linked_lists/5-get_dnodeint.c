#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the 9nth node
 * @head: Pointer to the head
 * @index: Index of the node, starting from 0.
 *
 * Return: Pointer to the 9nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int i = 0;

	while (current_node != NULL && i < index)
	{
		current_node = current_node->next;
		i++;
	}

	if (i != index)
		return (NULL);

	return (current_node);
}
