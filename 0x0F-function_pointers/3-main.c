#include "calc.h"

/**
 * main - Entry point
 *
 * @argc: count of arguments
 * @argv: array of arrguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, Result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (!IS_OPERATOR(op) || strlen(op) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(op, "/") == 0 || strcmp(op, "%") == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	Result = get_op_func(op)(a, b);

	printf("%d\n", Result);
	return (0);
}
