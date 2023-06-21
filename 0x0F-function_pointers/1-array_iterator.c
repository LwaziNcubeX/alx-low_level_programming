#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @size: size of array
 * @array: array
 * @action: pointer to a function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = -1;

	if (array && action)
	{
		while (size > ++i)
		{
			action(array[i]);
		}
	}
}
