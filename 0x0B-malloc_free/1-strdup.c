#include "main.h"

/**
 * _strdup -  a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: the string
 *
 * Return:  a pointer to a new string which is a duplicate of the string str,
 * NULL if str = NULL,
 * On success, the _strdup function returns a pointer to the duplicated string,
 * returns NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	int i;
	int length = strlen(str) + 1;
	char *s = malloc(sizeof(char) * length);

	if (s == NULL || str == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		s[i] = str[i];
	return (s);

}
