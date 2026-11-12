#include "main.h"
/**
* _strpbrk - looks for a set of bytes
* @s: The array
* @accept: the list of letters
* Return: No return
*/

char *_strpbrk(char *s, char *accept)
{
int i;
int j;
i = 0;

while (*s != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (*s == accept[j])
{
return (s);
}
j++;
}
s++;
}
return (s);
}
