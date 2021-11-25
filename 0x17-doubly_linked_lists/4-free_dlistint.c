#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list
 * @head: pointer to list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head, *h;

	while (node != NULL)
	{
		h = node->next;
		free(node);
		node = h;
	}
}
