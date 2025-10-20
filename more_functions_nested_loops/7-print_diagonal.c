#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character '\' should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		/* imprimir espacios antes de la diagonal */
		for (j = 0; j < i; j++)
			_putchar(' ');

		/* imprimir la barra diagonal */
		_putchar('\\');

		/* salto de línea */
		_putchar('\n');
	}
}

