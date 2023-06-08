#include "main.h"
/**
 * factorial - Entry Point
 * @n: assigned num
 *
 * Return: -1 to indicate error
 * 0 success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return  (1);
	else
		return (n * factorial(n - 1));
}
