#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 is s1 == s2
 * other otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, m = 0;

	while (m == 0)
	{
		if(*(s1 + i) == '\0' && *(s2 + i) == '\0')
			break;
		m = *(s1 + i) - *(s2 +i);
		i++;
	}

	return (m);
}
