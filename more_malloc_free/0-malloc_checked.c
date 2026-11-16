#include "main.h"
/**
* *malloc_checked - allocate memory
* @b: A unsigned int
* Return: nothing
*/

void *malloc_checked(unsigned int b)
{
void *hold;
hold = malloc(b);
if (hold == NULL)
{
exit(98);
}
return (hold);
}
