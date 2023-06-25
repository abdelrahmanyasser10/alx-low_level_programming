#include "main.h"

/**
 * print_last_digit -  a function that prints the last digit of a number.
 *
 * @n :  the integer
 *
 * Return: the last digit of a number
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
