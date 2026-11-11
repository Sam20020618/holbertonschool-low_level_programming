#include "main.h"
/**
* leet - encode string into 1337
* @str: The array
* Return: No return
*/

char *leet(char *str)
{
int i;
int j;
char find[] = "aAeEoOtTlL";
char change[] = "4433007711";
i = 0;
while (str[i] != '\0')
{
j = 0;
while (find[j] != '\0')
{
if (str[i] == find[j])
{
str[i] = change[j];
}
j++;
}
i++;
}
}
