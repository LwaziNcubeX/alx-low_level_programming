#include "main.h"
/**
 * _puts - entry point
 * @str: assigned char
 * Return - void
 */

void _puts(char *str)
{
	int string = 0;
	while (str[string])
	{
		_putchar(str[string]);
		string++;
	}
	_putchar('\n');
}
