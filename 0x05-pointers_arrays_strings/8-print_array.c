#include "main.h"
#include <stdio.h>

/**
 * print_array - entry point
 * @a: assigned int
 * @n: assigned int
 */

void print_array(int *a, int n)
{
	int index;

	index = 0;
	for (n--; n >= 0; n--, index++)
	{
		printf("%d", a[index]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");

}
