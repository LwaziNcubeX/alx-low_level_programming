#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Double pointer to the head of the doubly linked list.
 * @n: Data to be set in the new node.
 *
 * Return: Address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		current_node = *head;
		while (current_node->next)
			current_node = current_node->next;

		new_node->prev = current_node;
		current_node->next = new_node;
	}

	return (new_node);
}
