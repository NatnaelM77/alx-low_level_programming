#ifndef SERACH_ALGOS
#define SERACH_ALGOS

#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/* Print Array */
void print_array(int *, int, int);

/* Linear Search Algorithm */
int linear_search(int *, size_t, int);

/* Binary Search Algorithm */
int binary_search(int *, size_t, int);

/* Jump Search Algorithm */
int jump_search(int *, size_t, int);

/* Interpolation Search Alogrithm */
int interpolation_search(int *, size_t, int);

/* Exonential Search Algorithm */
int exponential_search(int *, size_t, int);

/* Advanced Binary Search Algorithm */
int advanced_binary(int *, size_t, int);

/* Jump List */
listint_t *jump_list(listint_t *, size_t, int);

/*Creae List */
listint_t *create_list(int *, size_t);

/*Free List */
void free_list(listint_t *);

/* Print List */
void print_list(const listint_t *);

/* Get Value */
int getValue(listint_t *, int);

/* Change Head */
listint_t *changeHead(listint_t *, int);

/* Linear Skip */
skiplist_t *linear_skip(skiplist_t *, int);

#endif /* SERACH_ALGOS */
