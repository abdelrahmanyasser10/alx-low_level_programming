#include <stdlib.h>
#include <stdio.h>

#define IS_SEPARATOR(c) ((c) == ' ' || (c) == '\t' || (c) == '\n')

/**
 * strtow - a function that splits a string into words.
 *
 * @str: the string
 *
 * Return: a pointer to an array of strings (words),
 * NULL if str == NULL or str == "",
 * If function fails, it should return NULL
 */
char **strtow(char *str)
{
	int i, j, k, word_count, word_length, all_separators;
	char **words;

	all_separators = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!IS_SEPARATOR(str[i]))
		{
			all_separators = 0;
			break;
		}
	}
	if (str == NULL || str[0] == '\0' || all_separators)
		return (NULL);
	word_count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!IS_SEPARATOR(str[i]) && (i == 0 || IS_SEPARATOR(str[i - 1])))
		word_count++;
	}
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);
	j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!IS_SEPARATOR(str[i]) && (i == 0 || IS_SEPARATOR(str[i - 1])))
		{
			word_length = 0;
			for (k = i; str[k] != '\0' && !IS_SEPARATOR(str[k]); k++)
				word_length++;
			words[j] = malloc(sizeof(char) * (word_length + 1));
			if (words[j] == NULL)
				return (NULL);
			for (k = 0; k < word_length; k++)
				words[j][k] = str[i + k];
			words[j][k] = '\0';
			j++;
		}
	}
	words[j] = NULL;
	return (words);
}
