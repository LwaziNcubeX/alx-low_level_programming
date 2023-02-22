#include <stdio.h>
/**
 * main - starting point
 *
 * Return: 0 success
 */

int main(void)
{
	 int n, soam = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || 0 == (n % 5))
			soam += n;
	}

	printf("%d\n", soam);

	return (0);
}
