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
	int i, n, min = 0, max = jump;
	listint_t *tmp;

	if (!list || size <= 0)
		return (NULL);
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
		printf("Value checked at index [%d] = [%d]\n", i, getValue(list, i));
	printf("Value found between indexes [%d] and [%d]\n", min, max);

	tmp = changeHead(list, min);
	printList(tmp, min, max, size, value);
}

/**
 * printList - print list
 *
 * @list: a list
 * @min: min value
 * @max: max value
 * @size: size of list
 * @value: value to search for
 *
 */

listint_t *printList(listint_t *list, int min, int max, size_t size, int value)
{
	int n;
	while (min <= max && min < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", min, list->n);
		n = getValue(list, min);
		if (value == n)
			return (list);
		min += 1;
		list = list->next;
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
