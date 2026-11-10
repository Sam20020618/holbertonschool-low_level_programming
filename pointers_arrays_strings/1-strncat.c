#include "main.h"
/**
* _strncat - put two string together
* @dest: The array
* @src: The array
* @n: The number of letter getting put
* Return: a pointer to the destination string dest
*/

char *_strncat(char *dest, char *src, int n)
{
char *hold;
int i;
hold = dest;
i = 0;
while (*dest != '\0')
{
dest++;
}
while (i < n)
{
*dest = *src;
src++;
dest++;
i++;
}

return (hold);
}
