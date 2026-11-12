#include "main.h"
/**
* _strspn - getting the length of a prefix substring
* @s: The array
* @accept: the list of letters
* Return: No return
*/

unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int count;
int set;
i = 0;
j = 0;
count = 0;
set = 0;

while (s[i] != '\0')
{
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
count++;
break;
}
j++;
}
if (set == count)
{
return (count);
}
set = count;
i++;
}
return (count);
}
