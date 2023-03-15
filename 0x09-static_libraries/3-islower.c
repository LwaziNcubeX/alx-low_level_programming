#include "main.h"
#include <ctype.h>

/**
 * _islower - entry point
 *
 * @c: getting character
 *
 * Return: end point
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
