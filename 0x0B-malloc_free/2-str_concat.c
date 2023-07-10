#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer should point to a newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2,
 * and null terminated,
 * if NULL is passed, treat it as an empty string, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, len;
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	len = strlen(s1) + strlen(s2) + 1;
	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (i < (int) strlen(s1))
			str[i] = s1[i];
		else if (i >= (int) strlen(s1) && i != len - 1)
			str[i] = s2[i - strlen(s1)];
		else if (i == len - 1)
			str[i] = '\0';
	}

	return (str);
}
