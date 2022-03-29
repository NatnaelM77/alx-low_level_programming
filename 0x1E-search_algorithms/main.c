#include "search_algos.h"

/**
 * main - Entry point
 *  
 * Return: Always 0
 */

int main(void)
{
	
	int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    jump_search(array, size, 4);

	return (0);
}