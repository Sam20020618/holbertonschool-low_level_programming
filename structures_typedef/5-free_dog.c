#include "dog.h"
/**
* free_dog - Free all dogs
* @d: The dog structure
* Return: nothing
*/

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->age);
free(d->owner);
free(d);
}
}
