#include "main.h"
/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 1; /* or should i use unsigned int ? */
	char *endian;

	endian = (char *)&num;
	if (*endian == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
