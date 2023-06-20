#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: a program that prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
