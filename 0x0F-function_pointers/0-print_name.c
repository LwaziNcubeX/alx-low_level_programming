#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer to a string containing the name to be printed
 * @f: pointer to a function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
		(*f)(name);
}