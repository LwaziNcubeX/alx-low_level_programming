#include "main.h"
/**
 * *_strpbrk - entry pont
 * @s: assigne value
 * @accept: assigned value
 * Return: null or s
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		for (p = accept; *p; ++p)
		{
			if
				(*p == *s)
				{
					return (s);
				}
		}
		++s;
	}
	return (NULL);
}
