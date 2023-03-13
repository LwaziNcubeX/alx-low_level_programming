#include "main.h"
/**
 * _isdigit - Entry point
 * @c: assigned num
 * Return: 1 or 0 (success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
