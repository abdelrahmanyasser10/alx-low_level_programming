#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c: the charater to check whether or not is an uppercase character
 *
 * Return: 1 if c is upper, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
