#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list
 * of integers using the Jump search algorithm.
 *
 * @list: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index of where value is located or -1 if it fails
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump = sqrt(size);
	listint_t *tmp;
	int max = jump;
	int min = 0;
	int i, n;

	if (!list || size <= 0)
	{
		return (NULL);
	}

	n = getValue(list, max);
	while (n <= value && max < size)
	{
		if (n == value)
			break;
		min = max;
		max += jump;
		n = getValue(list, max);
		if (max > size - 1)
		{
			max--;
			break;
		}
	}

	for (i = jump; i <= max; i += jump)
	{
		printf("Value checked at index [%d] = [%d]\n", i, getValue(list, i));

	}

	printf("Value found between indexes [%d] and [%d]\n", min, max);

	tmp = changeHead(list, min);
	while (min <= max && min < size)
	{
		n = getValue(tmp, min);
		printf("Value checked array[%d] = [%d]\n", min, tmp->n);
		if (value == n)
			return (tmp);
		min += 1;
		tmp = tmp->next;
	}

	return (NULL);
}


/**
 * getValue - return a value pointed by index
 * 
 * @list: a list
 * @index: index of elem
 * 
 * Return: value
 */

int getValue(listint_t *list, int index)
{
	while (list)
	{
		if (list->index == index)
			return list->n;
		list = list->next;
	}

	return (-1);
}


/**
 * changeHead - return a node
 * 
 * @list: a list
 * @index: index of node
 * 
 * Return: node
 */

listint_t *changeHead(listint_t *list, int index)
{
	while (list)
	{
		if (list->index == index)
			return list;
		list = list->next;
	}

	return (NULL);
}
