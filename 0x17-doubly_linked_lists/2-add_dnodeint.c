#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to list
 * @n: value of node
 *
 * Return: a pointer to new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (*head != NULL)
		new_node->prev = NULL;
	else
		new_node->prev = *head;

	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
