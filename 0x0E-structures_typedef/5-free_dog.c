#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_dog - a funcation that free a var of type dog
 * @d:ptr to the struc
 * Return:nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
