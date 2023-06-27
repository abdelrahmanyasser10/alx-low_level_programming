#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: ptr that points to the first element of the array
 * @n: number of elements to be printed
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d", *(a + i));
	}
	putchar('\n');
}
