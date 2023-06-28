#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * 
 * Return: nothing
 */
void more_numbers(void)
{
	int i, m;
	
	for (m = 0; m < 10; m++)
	{
		for (i = 0; i <= 15; i++)
		{
			if (i >= 0 && i <= 9)
				_putchar('0' + i);
			else if (i <= 15)
			{
				_putchar('0' + (i <= 14 ? 1 : -38));
				if (i == 15)
					break;
				_putchar('0' + i - 10);
			}
		}
	}
}
