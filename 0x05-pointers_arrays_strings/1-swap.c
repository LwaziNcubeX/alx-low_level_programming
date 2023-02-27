#include "main.h"
/**
 * swap_int - Entry Point
 * @a: pointer of an int
 * @b: pointer of an int
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
