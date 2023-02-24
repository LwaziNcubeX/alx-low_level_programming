#include"main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: assigned size of the triangle
 *
 * Return: Always 0
*/

void print_triangle(int size)
{
	int n, x;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (n = 1; n <= size; ++n)
		{
			for (x = 1; x <= size; ++x)
			{
				if ((n + x) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
