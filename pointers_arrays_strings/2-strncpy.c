#include "main.h"
/**
* _strncpy - copy over part of an array
* @dest: The array
* @src: The array
* @n: The number of letter getting put
* Return: a pointer to the destination string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
char *hold;

i = 0;
hold = dest;

while (i < n && *src != '\0')
{
*dest = *src;
dest++;
src++;
i++;
}

while (i < n)
{
*dest = '\0';
i++;
dest++;
}

return (hold);
}
