#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the first node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int count;
	const list_t *p = h;

	count = 0;

	while (p != NULL)
	{
		count++;
		p = p->next;
	}

	return (count);
}
