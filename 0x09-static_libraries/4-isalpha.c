#include "main.h"
#include <ctype.h>

/**
 * _isalpha - entry point
 *
 * @c: getting character
 *
 * Return: end point
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
