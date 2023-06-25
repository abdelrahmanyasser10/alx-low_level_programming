#include "main.h"

/**
 * print_last_digit -  a function that prints the last digit of a number.
 *
 * @n :  the integer
 *
 * Return: the last digit of a number
 */

int print_last_digit(long int n)
{
	_putchar('0' + (n < 0 ? ((n * -1) % 10) : (n % 10)));
	return (n < 0 ? ((n * -1) % 10) : (n % 10));
}
