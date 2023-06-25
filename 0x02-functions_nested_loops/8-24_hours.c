#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: 1 on success
 */

void jack_bauer(void)
{
	int i, j, k, m;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 2 && j == 4)
				break;

			for (k = 0; k < 6; k++)
			{
				for (m = 0; m < 10; m++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + m);
					_putchar('\n');
				}
			}
		}
	}
}
