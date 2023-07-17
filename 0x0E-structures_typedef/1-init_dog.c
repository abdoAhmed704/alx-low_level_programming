#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: initialized dog
 * @owner: owner's name
 * @name: the dog's name
 * @age: dog's age
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
