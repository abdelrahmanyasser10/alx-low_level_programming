#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * @argv: array of arguments
 * @argc: length of argv
 *
 * return: 0
 */

int main(int argc, char **argv)
{
	int cents;
	int coins[5];
	int number_of_coins;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	

	cents = atoi(argv[1]);
	if (cents < 0)
        {
                printf("0\n");
                return (0);
        }

	coins[0] = 25;
	coins[1] = 10;
	coins[2] = 5;
	coins[3] = 2;
	coins[4] = 1;
	number_of_coins = 0;

	while (cents != 0)
	{
		for(i = 0; i < 5; i++)
		{
			if (cents >= coins[i])
				break;
		}
		
		cents = cents - coins[i];
		number_of_coins++;
	}

	printf("%d\n", number_of_coins);
	return (0);
}
