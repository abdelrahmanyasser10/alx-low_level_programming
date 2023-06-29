#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 15 if s1 > s2
 * -15 if s1 < s2
 *  0 if s1 == s2
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
		return (0);
	else if (s1 > s2)
		return (15);
	else if (s1 < s2)
		return (-15);
	return (0);
}
