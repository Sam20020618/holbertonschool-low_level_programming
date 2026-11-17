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
dog->name = name;
dog->age = age;
dog->owner = owner;

return (dog);
}
