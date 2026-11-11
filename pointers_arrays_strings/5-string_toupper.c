#include "main.h"
/**
* *string_toupper - change lower case to cap
* @char: The array
* Return: No return
*/

char *string_toupper(char *)
{
int i;
i = 0;
while (*char != '\0')
{
if (char[i] >= 'a' && char[i] <= 'z')
{
char[i] = char[i] - 32;
}
i++;
}
}
