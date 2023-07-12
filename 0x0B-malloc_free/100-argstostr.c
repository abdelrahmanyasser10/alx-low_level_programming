#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of your program.
 *
 * @ac: argc
 * @av: argv
 *
 * Return: NULL if ac == 0 or av == NULL,
 *  a pointer to a new string, or NULL if it fails,
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	}

	str = malloc(sizeof(char) * size + ac + 1);

	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
