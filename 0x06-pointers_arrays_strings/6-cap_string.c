#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 *
 * @str: string
 *
 * Return: string after capitaliztion
 */

int isSeparator(char a);

char *cap_string(char *str)
{
	int i = 0;

	while(*(str + i) != '\0')
	{
		if (i == 0 && !(isSeparator(*(str + i))) && *(str + i) >= 97 && *(str + i) <= 122)
			*(str + i) -= 32;
		else if(isSeparator(*(str + i - 1)) && *(str + i) >= 97 && *(str + i) <= 122)
			*(str + i) -= 32;
		i++;
	}
	return (str);
}

/**
 * isSeparator - a function checks whether the string character is
 * a word separator or not
 *
 * @a:  the character
 *
 * Return: 1 if true
 * 0 if not true
 */

int isSeparator(char a)
{
	if (a == ' ' || a == '\t' || a == '\n' || a == ',' || a == ';' || a == '.'
			|| a == '!' || a == '?' || a == '"'
			|| a == '(' || a == ')' || a == '{' || a == '}')
	{
		return (1);
	}
	else
		return (0);
}
