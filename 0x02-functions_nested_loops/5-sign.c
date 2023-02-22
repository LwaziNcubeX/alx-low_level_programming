#include "main.h"
#include <ctype.h>

/**
 * _print_sign - entry point
 *
 * @n: getting character
 *
 * Return: end point
 */

int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 48)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		_putchar('-');
		return (0);
	}
}
