#include "main.h"
/**
* _strcmp - compare two strings
* @s1: The array
* @s2: The array
* Return: The diffenert between the two char
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 != '0')
{
if (*s1 == *s2)
{
return (0);
}
if (*s1 < *s2 || *s1 > *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}

}
