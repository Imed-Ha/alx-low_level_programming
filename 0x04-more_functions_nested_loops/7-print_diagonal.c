#include "main.h"

/**
 * print_diagonal - prints a diagonal line of n length
 * @n: length of the diagonal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
