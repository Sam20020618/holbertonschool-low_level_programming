#include "main.h"
/**
* *create_array - create an array of chars
* @size: The size of the array
* @c: the char
* Return: No return
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ar;

i = 0;
ar = malloc(size * sizeof(char));

if (size == 0)
{
return (NULL);
}
while (i < size)
{
ar[i] = c;
i++;
}
ar[i] = '\0';
return (ar);
}
