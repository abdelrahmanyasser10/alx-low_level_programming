#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * rev_string - Write a function that reverses a string.
 *
 * @s: the string to be reversed
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	char *temp = (char *) malloc(sizeof(char) * (strlen(s) + 1));
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		temp[(strlen(s) - 1) - i] = s[i];
	for (i = 0; i <= (int)strlen(s); i++)
		s[i] = temp[i];
}
