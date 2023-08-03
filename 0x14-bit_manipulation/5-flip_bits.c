#include "main.h"
/**
 * flip_bits - filps bits
 * @n: The first number
 * @m: The second number
 * result: XOR is a bitwise operator, and it stands for "exclusive or."
 *             :either the results are "exclusive or"
 * Return: The number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	result = n ^ m;
	while (result != 0)
	{
		result = result & (result - 1);
		count++;
	}

	return (count);
}
