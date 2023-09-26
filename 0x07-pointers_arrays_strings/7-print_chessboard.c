#include "main.h"
/**
 * print_chessboard - prent chessboard arr.
 * @a: rows.
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
	int ix, jx;

	for (ix = 0; ix < 8; ix++)
	{
		for (jx = 0; jx < 8; jx++)
		{
			_putchar(a[ix][jx]);
		}
		_putchar('\n');
	}
}
