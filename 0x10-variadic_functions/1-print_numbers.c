#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i == n - 1)
			{
				printf("%d\n", va_arg(args, int));
				break;
			}
			printf("%d%s", va_arg(args, int), separator);
		}
		else
		{
			if (i == n - 1)
			{
				printf("%d\n", va_arg(args,int));
				break;
			}
			printf("%d", va_arg(args, int));
		}
	}
	va_end(args);
}
