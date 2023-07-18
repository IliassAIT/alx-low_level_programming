#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a dog struct initialiazer
 * @d: a pointer to the struct (dog).
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
