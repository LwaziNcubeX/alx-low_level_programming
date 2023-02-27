#include "main.h"
/**
 * puts2 - Entry point
 * @str: assigned string
 * Return: void
 */
void puts2(char *str)
{
	int string = 0;

	while (str[string])
	{
		{
			if (string % 2 == 0)
			{
				_putchar(str[string]);
			}
			string++;
		}
	}
	_putchar('\n');
}

