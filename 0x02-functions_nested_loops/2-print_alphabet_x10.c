#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet 10 times
 *
 * Return: On success 1.
 * On error, -1 is returned, errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
