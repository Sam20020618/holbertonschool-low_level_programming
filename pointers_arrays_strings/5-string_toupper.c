#include "main.h"
/**
* *string_toupper - change lower case to cap
* @str: The array
* Return: No return
*/

char *string_toupper(char *str)
{
char *hold;
hold = str;
while (*hold != '\0')
{
if (*hold >= 'a' && *hold <= 'z')
{
*hold = *hold - 32;
}
hold++;
}
return (str);
}
