#include "main.h"

/**
 * print_sign -  a function that tells the sign of an integer
 *
 * @n: the number to check its sign
 *
 * Return: 1 if positive,
 * -1 if negative,
 *  0 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
