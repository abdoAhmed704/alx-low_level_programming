#ifndef DOG_H
#define DOG_H
/**
 * struct dog - class of dogs
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Description: build a struct of dogs
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
