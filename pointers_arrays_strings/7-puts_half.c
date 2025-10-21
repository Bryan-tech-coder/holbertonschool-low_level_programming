#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

		while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length - 1) / 2 + 1;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}

