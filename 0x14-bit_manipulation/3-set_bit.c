#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to the unsigned long int number
 * @index: The index of the bit to be set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bit_mask = 1UL << index;
	*n |= bit_mask;

	return (1);
}
