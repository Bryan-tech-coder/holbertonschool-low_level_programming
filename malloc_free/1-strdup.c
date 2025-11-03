#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
    char *copy;
    unsigned int i, length;

    if (str == NULL)
        return (NULL);

    /* Calcula la longitud usando for */
    for (length = 0; str[length] != '\0'; length++)
        ;

    copy = malloc((length + 1) * sizeof(char));
    if (copy == NULL)
        return (NULL);

    /* Copia los caracteres */
    for (i = 0; i < length; i++)
        copy[i] = str[i];

    copy[i] = '\0';

    return (copy);
}
