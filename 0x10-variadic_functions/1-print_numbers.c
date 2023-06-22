#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: numbers of integers passed in a function
 * @separator: string to be printed btwn numbers
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int value;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, unsigned int);

		printf("%d", value);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	va_end(args);
	printf("\n");
}
