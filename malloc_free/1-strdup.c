#include "main.h"
/**
* *_strdup - Makes a copy of the string in memory
* @str: A array of char
* Return: ar
*/

char *_strdup(char *str)
{
int i;
int size;
char *ar;

size = 0;
i = 0;

if (str == NULL)
{
return (NULL);
}

while (str[size] != '\0')
{
size++;
}
ar = malloc(size *sizeof(char) + 1);

if( ar == NULL)
{
return (NULL);
}

while (i < size)
{
ar[i] = str[i];
i++;
}
ar[i] = '\0';
return (ar);
}
