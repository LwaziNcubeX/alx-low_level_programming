#include "hash_tables.h"
/**
 * hash_djb2 - Hashes a string using the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The hash value as a 32-bit unsigned integer.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		hash = ((hash << 5) + hash) + str[i];
	}

	return (hash);
}
