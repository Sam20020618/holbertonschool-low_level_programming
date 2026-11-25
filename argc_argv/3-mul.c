#include "main.h"
/**
* main - print the file name
* @argc: the size of the array
* @argv: the array
* Return: No return
*/

int main(int argc, char **argv)
{
int i;
int result;
result = 0;
if (argc != 3)
{
printf("Error\n");
return (1);
}
result = argv[1] * argv[2];
printf("%d\n", result);
return (0);
}
