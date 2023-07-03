#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: the string
 * @c: the character we're looking for in the string
 *
 * Return: the location of the first occurrence of c or '\0'
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			break;
		i++;
	}

	return (s + i);
}
