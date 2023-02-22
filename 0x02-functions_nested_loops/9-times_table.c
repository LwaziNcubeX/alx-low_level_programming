#include "main.h"

/**
 * times_table - entry point
 *
 * 
 * Return: end point
 */

void times_table(void)
{
	int n = 9;

	for (int i = 0; i <= 9; ++i)
	{
		_putchar("%d * %d\n", n, i, n * i);
	}
	return (0);
}
