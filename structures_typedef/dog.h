#ifndef DOG_H
#define DOG_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Creating a struct for a dog
 * @name: The dog name
 * @age: The dog age
 * @owner: The dog owner
 *
 */
struct dog_t
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
