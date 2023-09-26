#include "main.h"
/**
 * print_chessboard - prent chessboard arr.
 * @a: rows.
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0 i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
