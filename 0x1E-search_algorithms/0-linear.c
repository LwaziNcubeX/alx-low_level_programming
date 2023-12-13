#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: is a pointer to the first element of the array
 * @size: size of array
 * @value: value to search
 *
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int Found = -1;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			Found = 0;
			return (i);
		}
	}

	if (Found)
	{
		return (Found);
	}

	return (0);
}
