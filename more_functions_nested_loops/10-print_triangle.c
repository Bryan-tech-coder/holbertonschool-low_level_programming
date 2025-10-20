#include "main.h"

/**
 * print_triangle - prints a triangle using the character '#'
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* imprimir espacios antes de la diagonal */
		for (j = 0; j < size - i; j++)
			_putchar(' ');

		/* imprimir # para formar la línea del triángulo */
		for (j = 0; j < i; j++)
			_putchar('#');

		/* salto de línea al final de cada fila */
		_putchar('\n');
	}
}

