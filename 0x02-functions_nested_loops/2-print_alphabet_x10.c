#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet 10 times
 *
 * Return: On success 1.
 * On error, -1 is returned, errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
			_putchar(j);
		_putchar('\n');
	}
}
