#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring
 * needle in the string haystack.
 *
 * @haystack: the string to search in
 * @needle: the string to search for
 *
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */


char *_strstr(char *haystack, char *needle)
{
	int count, i, j, temp;

	count = 0;
	i = 0;
	temp = 0;

	while (*(haystack + i) != '\0')
	{
		temp = i;
		j = 0;
		if (*(haystack + i) == *needle)
		{
			while (*(needle + j) != '\0')
			{
				if (needle[j] == haystack[i])
					count++;
				else
					break;
				i++;
				j++;
			}

			if (count == (int) strlen(needle))
				return (haystack + temp);
		}

		count = 0;
		i = temp;
		i++;
	}

	return (0);
}

