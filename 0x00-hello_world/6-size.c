#include <stdio.h>

/**
 * main - Prints the size of various types in byte(s)
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(LongintType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(doubleType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
