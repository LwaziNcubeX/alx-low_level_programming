#include "main.h"
/**
 * _strspn - entry pointt
 * @s: assigned char
 * @accept: assigned char
 * Return: No. Of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	for (; *s != '\0'; s++)
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				count++;
				break;
			}
		}
		if
				(*p == '\0')
		{
				return (count);
		}
	}
	return (count);
}
