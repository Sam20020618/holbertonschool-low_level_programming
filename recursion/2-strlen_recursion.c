#include "main.h"
/**
* _strlen_recursion - Prints the count of the string
* @s: The char array
* Return: nothing
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1);
}
