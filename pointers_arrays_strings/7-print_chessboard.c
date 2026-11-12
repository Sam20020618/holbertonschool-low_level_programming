#include "main.h"
/**
* print_chessboard - pritns a chessboard
* @a: The array
* Return: No return
*/

void print_chessboard(char (*a)[8])
{
int i;
int j;
i = 0;
j = 0;
while (i < 8)
{
putchar(a[i][j]);
j++;
if (j == 8)
{
putchar('\n');
i++;
j = 0;
}
}
}
