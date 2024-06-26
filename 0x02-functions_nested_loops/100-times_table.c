#include "main.h"

/**
 * print_times_table - a function that prints the n times table, starting with 0
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n)
{
    int i, j, result;

    if (n > 15 || n < 0)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            result = i * j;
            if (j == 0)
                _putchar('0');
            else
            {
                _putchar(',');
                _putchar(' ');
                if (result < 10)
                {
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(result + '0');
                }
                else if (result < 100)
                {
                    _putchar(' ');
                    _putchar(result / 10 + '0');
                    _putchar(result % 10 + '0');
                }
                else
                {
                    _putchar(result / 100 + '0');
                    _putchar(result / 10 % 10 + '0');
                    _putchar(result % 10 + '0');
                }
            }
            if (j == n)
                _putchar('\n');
        }
    }
}