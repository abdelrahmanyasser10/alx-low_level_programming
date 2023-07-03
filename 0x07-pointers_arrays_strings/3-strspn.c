#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: string
 * @accept: string
 *
 * Return:  the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (!(strchr(accept, *(s + i))))
			break;
		i++;
	}

	if (*(s + i) == '\0')
		return (0);
	else
		return (i);
}
