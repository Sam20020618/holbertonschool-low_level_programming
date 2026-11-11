#include "main.h"
/**
* *_memcpy - fills memeory to pointer
* @dest: The array
* @src: the array
* @n: number of times
* Return: No return
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *hold;
hold = dest;

while (n > 0)
{
*hold = *src;
n--;
hold++;
src++;
}
return (dest);
}
