#include "main.h"
#include <stdlib.h>
/**
 * array_range - crea un array de enteros desde min hasta max
 * @min: valor mínimo
 * @max: valor máximo
 *
 * Return: puntero al nuevo array, o NULL si falla
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
