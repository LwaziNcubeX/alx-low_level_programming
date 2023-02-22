#include "main.h"
#include <ctype.h>

/**
 * print_sign - entry point
 *
 * @n: getting character
 *
 * Return: end point
 */

int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 48)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
