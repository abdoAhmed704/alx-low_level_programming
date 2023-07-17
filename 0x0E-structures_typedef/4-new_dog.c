#include <stdlib.h>
#include "dog.h"

/**
 * copyfun - returns (qwe) with a copy of a string from (src)
 *
 * @src: string to copy
 * @qwe: copy string to here
 *
 * Return: @qwe
*/

char *copyfun(char *qwe, char *src)
{
	int k;

	for (k = 0; src[k]; k++)
		qwe[k] = src[k];
	qwe[k] = '\0';

	return (qwe);
}
/**
 * _getlength - gets a length of string
 *
 * @str: the string to get the length
 *
 * Return: length of @str
*/

int _getlength(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
/**
 * new_dog - creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: struct pointer dog
 * NULL if function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* if name and owner are empty and age is less than zero return null*/
	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_getlength(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_getlength(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = copyfun(dog->name, name);
	dog->age = age;
	dog->owner = copyfun(dog->owner, owner);

	return (dog);
}
