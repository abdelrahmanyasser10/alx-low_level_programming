#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
/**
 * main - entry point 
 *
 * Description: a program that generates random valid
 * passwords for the program 101-crackme.
 *
 * Return: 0
 */

int main(void)
{
	time_t t;

	srand((unsigned) time(&t));
	printf("%d\n", rand());

	return (0);
