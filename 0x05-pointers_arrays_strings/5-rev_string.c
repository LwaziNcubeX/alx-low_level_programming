#include "main.h"
/**
 * rev_string - Entry Point
 * @s: pointer of an character
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, r = 0;
	char str[700];

	while (*(s + r))
	{
		*(str + r) = *(s + r);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + r);
		r++;
		i--;
	}
}
