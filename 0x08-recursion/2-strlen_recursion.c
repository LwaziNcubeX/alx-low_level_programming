#include "main.h"
/**
 * _strlen_recursion - prints string len
 * @s: assigned char
 *
 * Return: string Length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
