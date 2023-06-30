#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @a: the array
 * @n: number of elements in the array
 *
 * Return:  nothig
*/

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = *(a + i);
		*(a + i) = *(a + ((n - 1) - i));
		*(a + ((n - 1) - i)) = temp;
	}
}
