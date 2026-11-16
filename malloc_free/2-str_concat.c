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
int size1;
int size2;
char *ar;

i = 0;
j = 0;
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
while (s1[i] != '\0')
{
size1++;
i++;
}
while (s2[j] != '\0')
{
size2++;
j++;
}
ar = malloc((size1 + size2) *sizeof(char) + 1);
if (ar == NULL)
{
return (NULL);
}
i = 0;
j = 0;
while (s1[i] != '\0')
{
ar[i] = s1[i];
i++;
}
while (s2[j] != '\0')
{
ar[size1 + j] = s2[j];
j++;
}
ar[size + j] = '\0';
return (ar);
