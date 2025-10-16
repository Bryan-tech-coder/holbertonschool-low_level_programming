#include "main.h"

/**
 * print_alphabet - Imprime el alfabeto en minúsculas seguido de nueva línea
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}

