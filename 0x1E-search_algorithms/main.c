#include "search_algos.h"

/**
 * main - Entry point
 *  
 * Return: Always 0
 */

int main(void) {

	int a1[] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	size_t size = sizeof(a1) / sizeof(a1[0]);

	printf("Found %d at index: %d\n\n", 6, jump_search(a1, size, 6));
	printf("Found %d at index: %d\n\n", 1, jump_search(a1, size, 1));
	printf("Found %d at index: %d\n", 999, jump_search(a1, size, 999));

	int a2[15] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 23, 47, 89, 160
	};
	printf("Found at index: %d\n", jump_search(a2, 15, 11));
	printf("Found at index: %d\n", jump_search(a2, 15, 9));
	printf("Found at index: %d\n", jump_search(a2, 15, 123456789));

	return (0);
}