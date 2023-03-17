#include "main.h"
#include <stdlib.h> 
#include <stdio.h>
#include <ctype.h>

/**
 * is_all_digits - tells if the string consists of digits
 * @str: pointer to current item in argument
 * Return: return 1 if all digits, 0 if not all digits.
 */

int is_all_digits(char *str)
{
	int i;


	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

/**
 * _atoi - converts a string of ascii digits to the values they represent
 * @s: pointer to the source string
 * Return: value of digits
 */

int _atoi(char *s)
{
	int i, result;


	i = result = 0;
	while (s[i])
	{
		if (isdigit(s[i]))
		{
			result *= 10;
			result += (s[i] - '0');
		}
		i++;
	} return (result);
}

/**
 * main - main function call
 * @argc: argument count
 * @argv: 2D array of arguments
 * Return: return 0 on success, 98 on failure
 */

int main(int argc, char *argv[])
{
	int i, sum;


	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}


	sum = 0; 
	for (i = 1; i < argc; i++)
	{
		if (!is_all_digits(argv[i]))
		{
			printf("Error\n");
			return (98);
		}
		sum += _atoi(argv[i]);
	}


	printf("%d\n", sum);
	return (0);
}
