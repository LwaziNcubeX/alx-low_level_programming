#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer to a string containing the name to be printed
 * @f: pointer to a function that will be used to print each character of the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		f(&name[i]);
	}
}
