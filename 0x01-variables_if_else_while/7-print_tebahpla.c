#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  print the alphabet reversed
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	alpha = 'z';

	while (alpha != 96)
	{
		putchar(alpha);
		alpha--;
	}

	putchar('\n');
	return (0);
}
