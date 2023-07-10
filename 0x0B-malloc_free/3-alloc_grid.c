#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * of integers.
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: NULL on failure,
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width == 0 || height == 0)
		return (NULL);

	array = malloc(sizeof(int *) * sizeof(height));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * sizeof(width));
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
