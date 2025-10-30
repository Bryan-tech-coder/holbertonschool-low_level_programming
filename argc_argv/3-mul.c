#include "main.h"
#include <stdlib.h>

/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * main - multiplies two numbers passed as arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 if incorrect number of arguments
 */
int main(int argc, char *argv[])
{
	int a, b, result, i;

	if (argc != 3)
	{
		for (i = 0; "Error"[i] != '\0'; i++)
			_putchar("Error"[i]);
		_putchar('\n');
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	print_number(result);
	_putchar('\n');

	return (0);
}
