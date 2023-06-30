#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @str - string
 *
 * Return: the string after changing ever lowercase character to uppercase
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (islower(*(str +i)))
			*(str + i) -= 32;
		i++;
	}

	return (str);
}
