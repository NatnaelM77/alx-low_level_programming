#include "search_algos.h"

/**
 * main - Entry point
 *  
 * Return: Always 0
 */

int main(void) {

	int a1[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 54, 61, 62, 76, 99
    	};
	size_t size = sizeof(a1) / sizeof(a1[0]);

	printf("Found %d at index: %d\n\n", 6, exponential_search(a1, size, 62));
	printf("Found %d at index: %d\n\n", 1, exponential_search(a1, size, 3));
	printf("Found %d at index: %d\n", 999, exponential_search(a1, size, 999));

	int a2[15] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 23, 47, 89, 160
	};
	printf("Found %d at index: %d\n", 11, exponential_search(a2, 15, 11));
	printf("Found %d at index: %d\n", 9, exponential_search(a2, 15, 9));
	printf("Found %d at index: %d\n", 123456789, exponential_search(a2, 15, 123456789));

	return (0);
}