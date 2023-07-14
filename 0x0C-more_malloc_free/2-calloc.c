#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *
 * @nmemb: elements of the array
 * @size: size of each element of the array
 *
 * Return: a pointer to the allocated memory,
 * If nmemb or size is 0, then _calloc returns NULL,
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(size * nmemb);
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		memory[i] = 0;

	return (memory);
}
