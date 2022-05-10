#include "search_algos.h"

/**
 * main - Entry point
 *  
 * Return: Always 0
 */

int main(void) {

	listint_t *list, *res;
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    list = create_list(array, size);
    print_list(list);

    res =  jump_list(list, size, 53);
    printf("Found %d at index: %lu\n\n", 53, res->index);
    res =  jump_list(list, size, 2);
    printf("Found %d at index: %lu\n\n", 2, res->index);
    res =  jump_list(list, size, 999);
    printf("Found %d at index: %p\n", 999, (void *) res);

    free_list(list);
	
	/*int a1[] = {
		0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9
    	};
	size_t size = sizeof(a1) / sizeof(a1[0]);

	printf("Found %d at index: %d\n\n", 3, interpolation_search(a1, size, 3));
	printf("Found %d at index: %d\n\n", 7, interpolation_search(a1, size, 7));
	printf("Found %d at index: %d\n", 999, interpolation_search(a1, size, 999));

	int a2[15] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 23, 47, 89, 160
	};
	printf("Found %d at index: %d\n", 11, interpolation_search(a2, 15, 11));
	printf("Found %d at index: %d\n", 9, interpolation_search(a2, 15, 9));
	printf("Found %d at index: %d\n", 123456789, interpolation_search(a2, 15, 123456789));*/
	
	return (0);
}