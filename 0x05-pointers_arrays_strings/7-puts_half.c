#include "main.h"
#include <string.h>

/**
 * puts_half -  a function that prints half of a string, followed by a new line
 *
 * @str: the string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;
	long int length = strlen(str);

	if (length % 2 == 0)
	{
		for (i = (length / 2); str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else
	{
		for (i = ((length - 1) / 2) + 1; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
