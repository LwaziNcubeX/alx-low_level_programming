#include "main.h"
#include <ctype.h>

/**
 * print_last_digit - entry point
 *
 * @n: getting value
 * Return: end point
 */

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
	{
		lastdigit *= -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
