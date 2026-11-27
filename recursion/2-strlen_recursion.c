#include "main.h"
/**
* _strlen_recursion - Prints the count of the string
* @s: The char array
* Return: nothing
*/
int _strlen_recursion(char *s)
{
int sum;
sum = 0;
if (*s == '\0')
{
return;
}
sum++;
_print_rev_recursion(s + 1);
}
