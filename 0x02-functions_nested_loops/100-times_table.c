#include "main.h"

/**
 * print_times_table - Prints the times table of a given number
 * @n: The limit of the times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			if (j == 0)
				_putchar('0');
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + product / 100);
				_putchar('0' + (product / 10) % 10);
				_putchar('0' + product % 10);
			}
		}
		_putchar('\n');
	}
}
