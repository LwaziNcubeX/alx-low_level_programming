#include "main.h"

/**
* *_strcpy -  entry point
 * @dest: assigned char
 * @src: assigned char
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
