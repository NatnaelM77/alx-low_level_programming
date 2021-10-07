#include "lists.h"

size_t print_list(const list_t *h)
{
	int count;
	const list_t *p = h;

	while(p != NULL)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		count++;
		p = p->next;
	}

	return count;
}