#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size:  size needed to be allocated
 * @c: the character
 *
 * Return: NULL if size = 0,
 * a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (arr == NULL || arr == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
