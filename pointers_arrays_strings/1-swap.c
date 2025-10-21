#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;  /* Guarda el valor de a */
	*a = *b;    /* Asigna a 'a' el valor de 'b' */
	*b = temp;  /* Asigna a 'b' el valor guardado en temp */
}

