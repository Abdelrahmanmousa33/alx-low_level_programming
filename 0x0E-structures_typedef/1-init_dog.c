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
	struct dog *ptr = d;

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
