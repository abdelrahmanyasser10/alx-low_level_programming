#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 *
 * @dest: destination
 * @src:  source
 * @n: bytes from memory area src
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
