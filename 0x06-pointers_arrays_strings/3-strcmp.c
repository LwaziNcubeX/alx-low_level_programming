#include "main.h"
/**
 * _strcmp - entry point
 * @s1: assigned char
 * @s2: assigned char
 * Return: success
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}

	if (s1[i] == s2[i])
	{
		return (0);
	}

	else if (s1[i] > s2[i])
	{
		return (1);
	}

	else
	{
		return (-1);
	}
}
