#include "main.h"

/**
 * print_times_table - starting point
 * @n: assigned number
 */
void print_times_table(int n)
{
	int num, b, total;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');

				total = num * b;

				if (total <= 99)
					_putchar(' ');
				if (total <= 9)
					_putchar(' ');

				if (total >= 100)
				{
					_putchar((total / 100) + '0');
					_putchar(((total / 10)) % 10 + '0');
				}
				else if (total <= 99 && total >= 10)
				{
					_putchar((total / 10) + '0');
				}
				_putchar((total % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
