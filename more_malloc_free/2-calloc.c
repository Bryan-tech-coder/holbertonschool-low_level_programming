#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory an array using malloc and initialize it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 * Return: A pointer to the allocated memory.
 *         If nmemb or size is 0, returns NULL.
 *         If memory allocation fails, returns NULL.
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size, i;
	char *byte_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	byte_ptr = (char *)ptr;
	for (i = 0; i < total_size; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
