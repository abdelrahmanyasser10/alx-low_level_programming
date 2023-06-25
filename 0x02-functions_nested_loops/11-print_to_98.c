#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: The first printed number
 *
 * Return:  print the required and return nothing
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
			i == 98 ? printf("%d\n", i) : printf("%d, ", i);
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
			i == 98 ? printf("%d\n", i) : printf("%d, ", i);
	}
}
