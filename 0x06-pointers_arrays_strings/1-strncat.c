#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: string destination
 * @src: string source
 * @n: number of bytes
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, l;

	l = strlen(dest);
	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (dest);
}
