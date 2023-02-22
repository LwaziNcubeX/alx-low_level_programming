#include "main.h"

/**
 * times_table - entry point
 * 
 */
void times_table(void)
{
	int num, b, total;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			total = num * b;

			if (total <= 9)
				_putchar(' ');
			else
				_putchar((total / 10) + '0');

			_putchar((total % 10) + '0');
		}
		_putchar('\n');
	}
}
