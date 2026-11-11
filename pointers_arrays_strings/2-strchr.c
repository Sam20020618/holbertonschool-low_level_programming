#include "main.h"
/**
* _strchr - serach for a character
* @s: The array
* @c: the char
* Return: No return
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}

