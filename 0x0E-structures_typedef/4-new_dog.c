#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - a funcation that creat a var of type dog
 * @name:dogs name
 * @age:dogs age
 * @owner: dogs owner
 * Return:nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	char *namecpy = malloc(sizeof(name) - 1);
	char *ownercpy = malloc(sizeof(owner) - 1);

	strcpy(namecpy, name);
	strcpy(ownercpy, owner);
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);

}
