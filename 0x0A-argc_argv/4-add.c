#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * @argc: arg counter
 * @argv: arg string
 *
 * Return: addition,0,1
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(*argv[i] >= 48 && *argv[i] <= 57))
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);

		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);

}
