#include "main.h"
/**
* *cap_string - change lower case to cap only for the start of a word
* @str: The array
* Return: No return
*/

char *cap_string(char *str)
{
  int i;
  i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (i == 0 || str[i-1] == ' ' || str[i-1] == ',' || str[i-1] == '\n' || str[i-1] == ';'
str[i-1] == '\t' || str[i-1] == '!' || str[i-1] == '?')
str[i] = str[i] - 32;
} 
i++;
}
return (str);
}
