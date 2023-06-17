#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  I sometimes suffer from insomnia.
 * And when I can't fall asleep, I play what I call the alphabet game
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha != 123)
	{
		putchar(alpha);
		alpha++;
	}

	alpha = 'A';

	while (alpha != 91)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
