#include "main.h"

/**
 * _strlen - prints the last digit
 * @s: The number to check
 * Return: returns count
 */

int _strlen(char *s)
{
int count;
int i;
count = 0;
i = 0;

while (*s != '\0')
{
count++;
s++;
}
return (count);
}
