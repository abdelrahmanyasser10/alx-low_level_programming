#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all possible combinations
 * of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, m;

	for (i = 48; i < 58; i++)
	{
		for (j = 48 ; j < 58; j++)
		{
			for (k = i; k < 58; k++)
			{
				for (m = (k == i ? j + 1 : 48); m < 58; m++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(m);
					if (i == 57 && j == 56 && k == 57 && m == 57)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
