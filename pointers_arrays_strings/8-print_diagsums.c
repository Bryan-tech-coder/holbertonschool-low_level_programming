#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - imprime la suma de las dos diagonales de una matriz cuad
 * @a: puntero a la matriz (array de enteros)
 * @size: tamaño de la matriz (número de filas/columnas)
 *
 * Return: nada
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d\n", sum1, sum2);
}

