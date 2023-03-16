#include "main.h"
int fibonacci(int n)
{
	int a = 1, b = 2, c, i;

	if (n == 1)
		return (a);
	if (n == 2)
		return (b);
	for (i = 3; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}
