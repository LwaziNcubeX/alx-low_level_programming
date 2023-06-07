#include "main.h"

/**
 * _puts_recursion - A funtion that prints a string in reverse
 * @s: assigned char from string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	
}
