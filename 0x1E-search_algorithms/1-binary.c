#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of integers
 * @array: is a pointer to the first element of the array
 * @size: size of array
 * @value: value to search
 *
 * Return: the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t left = 0, right = size - 1;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
