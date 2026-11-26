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
int j;
int sum;
sum = 0;

for (i = 0; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
