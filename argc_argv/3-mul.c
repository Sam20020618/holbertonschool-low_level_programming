#include "main.h"
/**
* main - print the file name
* @argc: the size of the array
* @argv: the array
* Return: No return
*/

int main(int argc, char **argv)
{
int result;
result = 0;
if (argc != 3)
{
printf("Error\n");
return (1);
}
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
return (0);
}
