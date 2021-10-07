#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer ot th first node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *p = h;

	count = 0;

	while (p != NULL)
		count++;

	return (count);
}
