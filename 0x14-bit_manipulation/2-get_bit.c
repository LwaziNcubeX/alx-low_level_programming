#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to extract the bit from
 * @index: The index of the bit to retrieve
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bit_mask = 1UL << index;
	return ((n & bit_mask) ? 1 : 0);
}
