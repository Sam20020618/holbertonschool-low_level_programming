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
i = 0;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
