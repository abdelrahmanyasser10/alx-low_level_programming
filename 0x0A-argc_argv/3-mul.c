#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry Point
 *
 * @argc: arg length
 * @argv: arg string
 *
 * Return: 1 if error 0 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
