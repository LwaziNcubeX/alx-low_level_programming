#include "main.h"
/**
 * _strlen_recursion - Entry Point
 * @s: assigned char
 * Return: something
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1)+ 1);
	else
		return (0);
}
