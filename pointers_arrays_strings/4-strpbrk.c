#include "main.h"

/**
 * _strpbrk - busca la primera ocurrencia en s de cualquier byte de accept
 * @s: cadena donde se buscará
 * @accept: conjunto de caracteres a buscar
 *
 * Return: puntero al primer byte de s que coincida con alguno de accept,
 * o NULL si no se encuentra ninguno
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return ('\0');
}

