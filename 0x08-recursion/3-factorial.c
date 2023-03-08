#include "main.h"
/**
 * factorial - Entry Point
 * @n: assigned char
 * Return: something
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
