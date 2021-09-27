#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 *struct dog - define dog
 *@name: dog name
 *@owner: dog owner
 *@age: dog age
 *
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

/* init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* print_dog */
void print_dog(struct dog *d);

#endif
