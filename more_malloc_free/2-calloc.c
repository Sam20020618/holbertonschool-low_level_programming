#include "main.h"
/**
* *_calloc - create memory for array
* @nmemb: A number of arrays to be made
* @size: size of memory
* Return: ar
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
unsigned int j;
void *ar

if (nmemb == NULL || size == NULL)
{
return (NULL);
}

for (i = 0; i < nmemb; i++)
{
ar[i] = malloc(size);
if (ar[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(ar[j]);
}
free(ar);
return (NULL);
}
}
return (ar);
}
