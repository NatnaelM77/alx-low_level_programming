#include "dog.h"
#include <stdio.h>

/**
 *print_dog - print struct dog
 *@d: pointer to struct dog
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return (0);
	}
	if (d->name && d->owner)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}else {
		printf("Name: %s\n", "(nil)");
		printf("Owner: %s\n", "(nil)");
	}
}

