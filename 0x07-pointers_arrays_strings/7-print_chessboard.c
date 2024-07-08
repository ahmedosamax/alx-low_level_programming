#include "main.h"
/**
 * print_chessboard - searches a string for any of a set of bytes
 * @a: row of string
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; *a[i] != '\0'; i++)
	{
		for (j = 0; j < 8 ; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
