#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer ot th first node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *p = h;

	while (p != NULL)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		count++;
		p = p->next;
	}

	return (count);
}
