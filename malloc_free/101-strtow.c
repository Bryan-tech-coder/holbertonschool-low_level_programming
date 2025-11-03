#include "main.h"
#include <stdlib.h>
/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	int i, j, k, start, end, len, words = 0;
	char **word;

	/* 1️⃣ Verificar si el string es nulo o vacío */
	if (str == NULL || *str == '\0')
		return (NULL);

	/* 2️⃣ Contar cuántas palabras hay */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			words++;
	}
	if (words == 0)
		return (NULL);

	/* 3️⃣ Reservar memoria para los punteros */
	word = malloc((words + 1) * sizeof(char *));
	if (word == NULL)
		return (NULL);

	/* 4️⃣ Recorrer el string y guardar cada palabra */
	for (i = 0, k = 0; k < words; k++)
	{
		/* Saltar espacios al principio */
		for (; str[i] == ' '; i++)
			;

		start = i;

		/* Buscar el final de la palabra */
		for (; str[i] != ' ' && str[i] != '\0'; i++)
			;

		end = i;
		len = end - start;

		/* Reservar memoria para la palabra */
		word[k] = malloc((len + 1) * sizeof(char));
		if (word[k] == NULL)
		{
			for (; k >= 0; k--)
				free(word[k]);
			free(word);
			return (NULL);
		}

		/* Copiar letra por letra */
		for (j = 0; j < len; j++)
			word[k][j] = str[start + j];
		word[k][j] = '\0';
	}

	word[k] = NULL;
	return (word);
}


