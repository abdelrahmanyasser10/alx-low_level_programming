#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: the strings ptr
 *
 * Return:  the length of a string
 */

int _strlen(char *s)
{
	int i, length;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	return (length);
}
