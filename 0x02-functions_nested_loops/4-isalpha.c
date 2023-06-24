#include "main.h"

/**
 * _isalpha - a function that checks whether the character is alphabetic.
 *
 * @c: the charcter to check if is alphabetic
 *
 * Return: 1 if lowercase and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && !(c > 122)) || (c >= 65 && !(c > 90)))
		return (1);
	else
		return (0);
}
