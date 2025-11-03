#include <stdlib.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to array of words, or NULL
 */
char **strtow(char *str)
{
	int i = 0, j, k, w = 0, words = 0;
	char **word;

	if (!str || !*str)
		return (NULL);

	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			words++;
	if (!words)
		return (NULL);

	word = malloc(sizeof(char *) * (words + 1));
	if (!word)
		return (NULL);

	for (i = 0; str[i] && w < words; w++)
	{
		for (; str[i] == ' '; i++)
			;
		for (j = i; str[j] && str[j] != ' '; j++)
			;
		word[w] = malloc(sizeof(char) * (j - i + 1));
		if (!word[w])
			return (NULL);
		for (k = 0; i < j; i++, k++)
			word[w][k] = str[i];
		word[w][k] = '\0';
	}
	word[w] = NULL;
	return (word);
}
