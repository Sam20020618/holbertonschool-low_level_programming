#include "dog.h"
/**
* *new_dog - Making a new dog
* @name: The dog name
* @age: The dog age
* @owner: The dog owner
* Return: dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

if (name == NULL || owner == NULL)
{
return (NULL);
}

dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}
dog->name = malloc(strlen(name) + 1;
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(strlen(owner) + 1;
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->age = age;

return (dog);
}
