#include "main.h"
/**
 * _strlen - Entry Point
 * @s: pointer of an character
 * Return: always 0
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;

	return (len);

}
