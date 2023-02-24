#include "main.h"

/**
 * print_line - Entry pint
 *
 * @n: assigned value
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
