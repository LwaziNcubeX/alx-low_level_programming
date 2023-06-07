#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: assigned char from a string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
