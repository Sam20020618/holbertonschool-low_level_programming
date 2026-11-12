#include "main.h"
/**
* _strstr - locstes a substring
* @haystack: The array
* @needle: The string to find
* Return: return haystack
*/

char *_strstr(char *haystack, char *needle)
{
int j;
int count;
int compare;
count = 0;
compare = 0;
j = 0;

if (needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
if (*haystack == needle[j])
{
count++;
j++;
if (needle[j] == '\0')
{
haystack -= count - 1;
break;
}
}
if (compare == count)
{
count = 0;
j = 0;
}
compare = count;
haystack++;
}
if (count > 0)
{
return (haystack);
}
return (NULL);
}
