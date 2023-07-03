#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 *
 * @s: string
 * @accept: string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (strchr(accept, *(s + i)))
			break;
		i++;
	}

	if (*(s + i) == '\0')
		return (NULL);
	else
		return (s + i);

}
