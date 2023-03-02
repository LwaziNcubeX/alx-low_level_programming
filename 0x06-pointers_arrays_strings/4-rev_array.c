#include "main.h"
/**
 * reverse_array - Entry point
 * @a: assigned int
 * @n: assigned int
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
