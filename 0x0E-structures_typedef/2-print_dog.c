#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - a funcation that prints var of type dog
 * @d:ptr to the struc
 * Return:nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Owner: %s\n", d->owner);
}
