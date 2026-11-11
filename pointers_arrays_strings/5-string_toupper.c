#include "main.h"
/**
* *string_toupper - change lower case to cap
* @str: The array
* Return: No return
*/

char *string_toupper(char *str)
{
int i;
i = 0;
while (*str != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
str++;
}
return (str);
}
