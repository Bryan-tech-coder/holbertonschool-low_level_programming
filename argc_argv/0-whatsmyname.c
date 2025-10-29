#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments (unused)
 * @argv: array of arguments, argv[0] is program name
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void)argc;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
