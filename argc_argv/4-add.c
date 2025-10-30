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
 * main - adds positive numbers passed as arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *arg;

	if (argc == 1) /* No numbers provided */
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		for (j = 0; arg[j] != '\0'; j++)
		{
			if (arg[j] < '0' || arg[j] > '9') /* Non-digit character */
			{
				_putchar('E');
				_putchar('r');
				_putchar('r');
				_putchar('o');
				_putchar('r');
				_putchar('\n');
				return (1);
			}
		}
		sum += atoi(arg);
	}

	print_number(sum);
	_putchar('\n');

	return (0);
}
