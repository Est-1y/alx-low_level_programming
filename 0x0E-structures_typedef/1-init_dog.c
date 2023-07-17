#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes variable of struct dog
 * @d: pointer to struct dog
 * @name: name to be initialized
 * @age: age to initialize
 * @owner: owner to be initialized
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
