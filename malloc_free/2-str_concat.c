#include "main.h"
/**
* *str_concat - create an array of two char together
* @s1: An array of char
* @s2: An array of char
* Return: ar
*/

char *str_concat(char *s1, char *s2)
{
int i;
int j;
int size;
char *ar;

i = 0;
j = 0;
size = 0;

while (s1[i] != '\0' && s2[j] != '\0')
{
if (s1[i] == '\0')
{
j++;
}
else
{
i++;
}
size++;
}

ar = malloc(size *sizeof(char) + 1);
if (ar == NULL)
{
return (NULL);
}

i = 0;
j = 0;
while (i  < size)
{
if (s1[i] == '\0')
{
ar[i] = s2[j];
j++;
}
else
{
ar[i] = s1[i];
}
i++;
}
ar[i] = '\0';
return (ar);
}
