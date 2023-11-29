#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the struct declared for the dog *d
 * @d: new dog
 * data of new dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!((*d).name))
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("name: %s\n", d->name);
			printf("Age: %f\n", d->age);
		}
		if (!(d->owner))
		{
			printf("owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", (*d).owner);
		}
	}
}
