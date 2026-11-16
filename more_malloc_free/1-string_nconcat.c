#include "main.h"
/**
* *string_nconcat - create an array of two char together up to n
* @s1: An array of char
* @s2: An array of char
* @n: The unsigned int
* Return: ar
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

unsigned int i, j, size;
char *ar;
size = 0;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[size] != '\0')
{
size++;
}
ar = malloc((size + n) *sizeof(char) + 1);
if (ar == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ar[i] = s1[i];
}
for (j = 0; j < n; j++)
{
ar[size + j] = s2[j];
}
ar[size + j] = '\0';
return (ar);
}
