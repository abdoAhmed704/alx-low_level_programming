#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - check the code
 *
 * @d: poiner to struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = malloc(sizeof(name));
		strcpy(d->name, name);

		d->age = age;

		d->owner = malloc(sizeof(owner));
		strcpy(d->owner, owner);

	}
}
