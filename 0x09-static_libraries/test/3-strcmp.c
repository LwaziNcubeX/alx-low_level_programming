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
	int s1val;
	int s2val;

/* Iterate through both strings until we find a different character*/
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}

/* Assign values to the characters in both strings*/
	s1val = s1[i] == '\0' ? 0 : s1[i];
	s2val = s2[i] == '\0' ? 0 : s2[i];

/* Return the difference between the values of the characters*/
	return (s1val - s2val);
}
