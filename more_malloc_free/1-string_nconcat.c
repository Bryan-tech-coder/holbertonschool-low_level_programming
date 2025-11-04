#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concate two strings up to n bytes from the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to concatenate from s2.
 * Return: A pointer to the newly allocated concatenated string.
 *         If memory allocation fails, the function returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *new_str;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}
	if (n < len2)
		len2 = n;

	new_str = malloc(len1 + len2 + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (i = 0; i < len2; i++)
		new_str[len1 + i] = s2[i];
	new_str[len1 + len2] = '\0';

	return (new_str);
}
