#include "main.h"
/**
 * print_rev - Entry Point
 * @s: pointer of an character
 * Return: void
 */

void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');

}
