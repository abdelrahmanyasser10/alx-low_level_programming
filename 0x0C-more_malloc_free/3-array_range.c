#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: the pointer to the newly created,
 * If min > max, return NULL,
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int i, n;
	int *aoi;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	aoi = malloc(sizeof(int) * n);
	if (aoi == NULL)
		return (NULL);
	for (i = 0; i < n; i++, min++)
		aoi[i] = min;
	return (aoi);
}
