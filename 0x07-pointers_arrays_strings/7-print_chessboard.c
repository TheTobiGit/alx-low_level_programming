#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: a pointer to an 8x8 2D array of chars
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int i = 0, j;

while (i < 8)
{
j = 0;

while (j < 8)
{
_putchar(a[i][j]);
j++;
}
_putchar('\n');
i++;
}
}
