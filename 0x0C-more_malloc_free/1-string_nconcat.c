#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the number of characters to be concatenated
 *
 * Return:  returned pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated,
 * If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = strlen(s1);

	if (n >= strlen(s2))
		n = strlen(s2);

	str = malloc(len + n + 1 + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len + n + 1; i++)
	{
		if (i < len)
		{
			str[i] = s1[i];
			continue;
		}
		str[i] = s2[i - len];
	}
	str[i] = '\0';
	return (str);
}
