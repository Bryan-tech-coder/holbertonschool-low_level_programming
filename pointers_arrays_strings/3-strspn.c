#include "main.h"

/**
 * _strspn - obtiene la longitud de un prefijo que contiene solo caracteres aceptados
 * @s: cadena donde se buscará
 * @accept: conjunto de caracteres válidos
 *
 * Return: número de bytes del segmento inicial de s
 * que contienen solo caracteres de accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}

	return (count);
}

