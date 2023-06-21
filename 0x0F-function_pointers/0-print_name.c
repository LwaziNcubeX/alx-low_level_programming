#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name of a person
 * @f: pointer to a function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
