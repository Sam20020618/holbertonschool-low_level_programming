#include "main.h"

/**
 * _islower - tell if a letter is lower case
 * Description: use while to check all lower case letter
 * @c: The character to check
 * Return: returns 1 if lower case else return 0
 */

int _islower(int c)
{
char let = 'a';
int i = 0;
while (i < 26)
{
if (let == c)
{
return (1);
}
let++;
i++;
}
return (0);
}
