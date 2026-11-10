#include "main.h"
/**
* _strcat - put two string together
* @dest: The array
* @src: The array
* Return : dest
*/

char *_strcat(char *dest, char *src)
{
char *hold;
hold = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (hold);
}
