#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a funcation that initialize a var of type dog
 * @d: address of the struct
 * @name:dogs name
 * @age:dogs age
 * @owner: dogs owner
 * Return:nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}