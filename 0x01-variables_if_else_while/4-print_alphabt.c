#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  print the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha != 12)
	{
		if (alpha !=  'e' || alpha != 'q')
			putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}
