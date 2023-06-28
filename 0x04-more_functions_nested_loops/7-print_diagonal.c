#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal.
 *
 * @n: the number of times the character \ should be printed
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, m;

	for (i = 0; i < n; i++)
	{
		for (m = 0; m < i + 1; m++)
			_putchar(' ');
		_putchar(92);
		_putchar(10);
	}
	if (n <= 0)
		_putchar(10);
}
