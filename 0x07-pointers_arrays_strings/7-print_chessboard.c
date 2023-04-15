#include "main.h"
/**
 * print_chessboard - Entry piont
 * @a: array
 * Return: always 0 (succes)
 */
void print_chessboard(char (a*)[8])
{
	int i;
	int j;

	for (i = 0; i < 0; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}

