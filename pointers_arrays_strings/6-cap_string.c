#include "main.h"
/**
* *cap_string - change lower case to cap only for the start of a word
* @str: The array
* Return: No return
*/

char *cap_string(char *str)
{
char *hold;
hold = str;
while (*hold != '\0')
{
if (*hold >= 'a' && *hold <= 'z' && *hold - 1 !< 'a' && *hold - 1 !< 'z')
{
*hold = *hold - 32;
}
hold++;
}
return (str);
}
