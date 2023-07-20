#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *
 * @n: number of arguments
 *
 * Return: the sum of integers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
