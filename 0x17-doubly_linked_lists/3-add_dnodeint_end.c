#include "lists.h"


/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to list
 * @n: value of node to be inseted
 *
 * Return: a pointer to new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *h = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = *head;
	new_node->next = NULL;

	if (*head != NULL)
	{
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new_node;
	}
	else
		*head = new_node;



	return (new_node);
}