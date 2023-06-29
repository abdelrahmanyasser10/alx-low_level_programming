#include "main.h"

/**
 * _strncpy - a function that copy two strings.
 *
 * @dest: string destination
 * @src: string source
 * @n: number of bytes
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
