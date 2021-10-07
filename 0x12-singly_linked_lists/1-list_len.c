#include "lists.h"

/**
 * print_list - returns the number of elements in a linked list_t list.
 * @h: pointer ot th first node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int count;
	const list_t *p = h;

	count = 0;

	while (p != NULL)
		count++;
	
	return (count);
}