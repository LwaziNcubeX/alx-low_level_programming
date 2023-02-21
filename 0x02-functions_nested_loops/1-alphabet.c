#include "main.h"
/**
 * print_alphabet - entry point
 *
 * _putchar: prints next line
 */

void print_alphabet(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
		_putchar(ltr);
	_putchar('\n');
}
