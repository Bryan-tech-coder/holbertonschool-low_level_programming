#include "main.h"

/**
 * _strstr - localiza la primera ocurrencia de la subcadena needle en haystack
 * @haystack: cadena donde se buscará
 * @needle: subcadena a buscar
 *
 * Return: puntero al inicio de la subcadena encontrada,
 * o NULL si no se encuentra
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}

	return ('\0');
}

