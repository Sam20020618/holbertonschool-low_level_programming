#include "3-calc.h"

/**
 * main - Does the operation of two numbers
 * @argc: The number of arguments
 * @argv: Array of arguments
 * Return: A int
 */

int main(int argc, char *argv[])
{
if (argc != 4)
{
printf("Error\n");
return (98);
}

if (get_op_func(argv[2]) == NULL)
{
printf("Error\n");
return (99);
}

if ((strcmp(argv[2], "%") == 0 || strcmp(argv[2], "/") == 0)
&& atoi(argv[3]) == 0)
{
printf("Error\n");
return (100);
}
printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
return (0);
}
