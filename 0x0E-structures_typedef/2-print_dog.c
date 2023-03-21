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
	if (d->name != NULL)
	printf("Name:%s\n", d->name);
	else
		printf("nil");
	if (d->age != 0.0)
	printf("Age:%f\n", d->age);
	else
		printf("nil");
	if (d->owner != NULL)
	printf("Owner:%s\n", d->owner);
	else
		printf("nil");
}
