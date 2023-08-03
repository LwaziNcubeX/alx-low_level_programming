#include "main.h"
/**
 * print_binary - prints a num to binary
 * @n: assigned number
 * NOTE: "1UL" represents the unsigned long integer value 1.
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit_mask;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	bit_mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (bit_mask)
	{
		if (n & bit_mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1)
		{
			_putchar('0');
		}
		bit_mask >>= 1;
	}
}
