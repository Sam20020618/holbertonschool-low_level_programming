#include "main.h"
/**
* *_memset - fills memeory to pointer
* @s: The array
* @b: the char
* @n: number of times
* Return: No return
*/

char *_memset(char *s, char b, unsigned int n)
{
char *hold;
hold = s;

while (n > 0)
{
*hold = b;
n--;
hold++;
}
return (s);
}
