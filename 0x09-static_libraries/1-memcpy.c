#include "main.h"
/**
 * *_memcpy - Entrey point
 * @dest: assigned destination
 * @src: assigned source
 * @n: assigned unsigned int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (n-- > 0)
	{
		*dest_ptr++ = *src_ptr++;
	}

	return (dest);
}
