#include "main.h"
/**
 * puts_half - Entry point
 * @str: assigned string
 * Return: void
 */
void puts_half(char *str)
{
	int index = 0;

	for (index = 0; str[index] != '\0'; index++);

	for (index /= 2; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
