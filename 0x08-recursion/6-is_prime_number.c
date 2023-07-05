#include "main.h"
/**
 * is_prime_number - to check if a number is prime or not
 *
 * @n: The input integer to check
 * Return: 1 if the num is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int i;

	if (n < 2)
	{
		return (0);
	}

	i = 2;
	while (i <= n / 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i += 1;
	}

	return (1);
}
