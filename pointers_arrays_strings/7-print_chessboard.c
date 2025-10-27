#include "main.h"

/**
 * print_chessboard - imprime un tablero de ajedrez de 8x8
 * @a: puntero a un array de 8 columnas por fila
 *
 * Return: nada
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

