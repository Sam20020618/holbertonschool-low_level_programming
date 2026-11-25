#include "main.h"
#include <ctype.h>
/**
* main - print the file name
* @argc: the size of the array
* @argv: the array
* Return: No return
*/

int main(int argc, char **argv)
{
int i;
int sum;
i = 0;
sum = 0;
for (i = 0; i < argc; i++)
{
if (isdigit(atoi(argc[i])) != 0)
{
printf("Error\n");
return (1);
}
sum += atoi(argc[i]);
}
printf("%d", sum);
return (0);
}
