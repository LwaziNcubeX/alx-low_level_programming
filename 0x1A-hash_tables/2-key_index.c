#include "hash_tables.h"
/**
 * key_index - gets the index of a key in a hash table array
 * @key: the key to be hashed
 * @size: the size of the hash table array
 * Return: the index at which the key should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
