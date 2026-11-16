#include "main.h"
/**
* *str_concat - create an array of two char together
* @s1: An array of char
* @s2: An array of char
* Return: ar
*/

char *str_concat(char *s1, char *s2)
{
int i, j, size1, size2;
char *ar;
size1 = 0;
size2 = 0;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[size1] != '\0')
{
size1++;
}
while (s2[size2] != '\0')
{
size2++;
}
ar = malloc((size1 + size2) *sizeof(char) + 1);
if (ar == NULL)
{
return (NULL);
}
for (i = 0; i < siz1; i++;)
{
ar[i] = s1[i];
}
for (j = 0; j < size2; j++)
{
ar[size1 + j] = s2[j];
}
ar[size1 + j] = '\0';
return (ar);
}

