#include "main.h"
#include <ctype.h>

/**
 * _abs - entry point
 *
 * @n: getting value
 * Return: end point
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * (-1);
		return (abs_val);
	}
	else
	{
		return (n);
	}
}
