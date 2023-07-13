#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: the size of memory to be allocated
 *
 * Return: void *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
		return (NULL);
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
