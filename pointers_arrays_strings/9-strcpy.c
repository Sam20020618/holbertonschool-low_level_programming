#include "main.h"

/**
 * *_strcpy - write src into dest
 * @dest, src: Both arrays 
 * Return: returns nothing
 */

char *_strcpy(char *dest, char *src)
{
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = *src;
 return (dest);
}
