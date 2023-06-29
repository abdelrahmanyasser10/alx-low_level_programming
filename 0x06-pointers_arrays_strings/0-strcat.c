#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: string destination
 * @src: string source
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, l;

	l = strlen(dest);
	i = 0;

	while (src[i] != '\0')
	{
		dest[l] = src[i];
		i++;
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
