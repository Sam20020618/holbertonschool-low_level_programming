#include "main.h"

/**
 * *_strcpy - write src into dest
 * @dest: both arrays
 * @src: Both arrays
 * Return: returns nothing
 */

char *_strcpy(char *dest, char *src)
{
char *hold;
hold = dest;
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (hold);
}
