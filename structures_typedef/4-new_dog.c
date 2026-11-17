#include "dog.h"
/**
* *new_dog - Making a new dog
* @name: The dog name
* @age: The dog age
* @owner: The dog owner
* Return: dog
*
* len - Count the length of string
* @s: An Array of char
* Return: i
*
* _copy - copy the data into the memory
* @dest: an array of char
* @src: an array of char
* return: dest
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

char *_copy(char *dest, char *src)
{
int i;
i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
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
_copy(dog->name, name);
dog->age = age;
_copy(dog->owner, owner);
return (dog);
}
