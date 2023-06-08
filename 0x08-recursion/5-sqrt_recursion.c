#include "main.h"
/**
 * binary_search - searches for the square root of a number using binary search
 * @start: starting index of the search range
 * @end: ending index of the search range
 * @n: assigned num
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */

int binary_search(int start, int end, int n)
{
	int MIDPOINT;
	int RESULT;

	if (start > end)
		return (-1);

	MIDPOINT = (start + end) / 2;

	if (MIDPOINT * MIDPOINT == n)
		return (MIDPOINT);

	else if (MIDPOINT * MIDPOINT < n)
	{
		RESULT = binary_search(MIDPOINT + 1, end, n);
		return ((RESULT == -1) ? -1 : RESULT);
	}
	else
	{
		RESULT = binary_search(start, MIDPOINT - 1, n);
		return ((RESULT == -1) ? -1 : RESULT);
	}

}

/**
 * _sqrt_recursion - computes the square root of a number using binary search
 * @n: assigned num
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (binary_search(1, n, n));

}
