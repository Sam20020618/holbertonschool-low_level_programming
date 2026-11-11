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
while (hold[i] != '\0')
{
if (hold[i] >= 'a' && hold[i] <= 'z')
{
if (hold[i - 1] >= 'a' && hold[i - 1] <= 'z')
{

}
else
{
*hold = *hold - 32;
}
} 
hold++;
}
return (str);
}
