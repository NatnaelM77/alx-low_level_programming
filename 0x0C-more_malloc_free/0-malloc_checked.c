#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: no of memory block
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
        void *ptr = malloc(b);

        if (!ptr)
                exit(98);

        return (ptr);
}
