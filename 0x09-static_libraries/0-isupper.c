#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if character is upper.
 *
 * @c: assigned input for c.
 *
 * Return: 1 if c is upper else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
