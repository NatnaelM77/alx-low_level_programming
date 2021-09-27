#ifndef DOG_H
#define DOG_H

/**
 *struct dog - define dog
 *@name: dog name
 *@owner: dog owner
 *@age: dog age
 *
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/* init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
