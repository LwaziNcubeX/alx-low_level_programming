#include "main.h"

/**
 * print_square - Entry point
 * @size: assigned size of the square
 */


void print_square(int size)
{
	int n, x;

	if (size <= 0)
		_putchar('\n');

	for (n = 0; n < size; n++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
