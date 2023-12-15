#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers
 * @array: is a pointer to the first element of the array
 * @size: size of array
 * @value: value to search
 *
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t low = 0;
	size_t jump = sqrt(size);

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%d] = [%ld]\n", array[i], i);
		if (array[i] == value)
		{
			printf("Value found between indexes [%ld] = [%d]\n", low, array[i]);
			return (i);
		}
		if (array[i] < value)
			low = i;

		else
		{
			break;
		}

	}
	printf("Value found between indexes [%ld] and [%d]\n", low, array[i]);
	for (i = low; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%ld]\n", array[i], i);
			return (i);
		}
	}

	return (-1);
}
