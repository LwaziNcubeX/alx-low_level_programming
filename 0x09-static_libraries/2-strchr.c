#include "main.h"
/**
 * *_strchr - entry point
 * @s: assinged character
 * @c: assignedcharacter
 * Return: c or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL); }
