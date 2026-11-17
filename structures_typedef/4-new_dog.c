#include "dog.h"
/**
* *new_dog - Making a new dog
* @name: The dog name
* @age: The dog age
* @owner: The dog owner
* Return: dog
*/

int len(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

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
dog->name = malloc(len(name) + 1);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(len(owner) + 1);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->age = age;

return (dog);
}
