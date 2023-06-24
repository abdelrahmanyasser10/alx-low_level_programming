#include "main.h"

/**
 * print_alphabet - a function that
 * prints the alphabet using _putchar function
 *
 * Retrun: On Success 1.
 * On error, -1 is returned, errorno is set appropriately.
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');
}
