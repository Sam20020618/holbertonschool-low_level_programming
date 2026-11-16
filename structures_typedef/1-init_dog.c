#include "dog.h"
/**
* init_dog - add values to dog
* @d: The dog structure
* @name:The dog name
* @age: The dog age
* @owner: The dog owner
* Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
if (d == NULL)
{
return (NULL);
}
d->name = name;
d->age = age;
d->owner = owner;
}
