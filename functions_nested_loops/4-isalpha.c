#include "main.h"

/**
 * _isalpha - tell if a letter is lower or upper case
 * Description: use while to check all lower and upper case letter
 * @c: The character to check
 * Return: returns 1 if letter else return 0
 */

int _isalpha(int c)
{
char let = 'a';
char letCap = 'A';
int i = 0;
while (i < 26)
{
if (let == c)
{
return (1);
}
if (letCap == c)
{
return (1);
}
let++;
letCap++;
i++;
}
return (0);
}
