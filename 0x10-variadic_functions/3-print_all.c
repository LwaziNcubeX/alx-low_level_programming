#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char c;
	int i;
	float f;
	char *s;

	va_start(args, format);
	while (*ptr)
	{
		switch (*ptr)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s", s);
				if (s == NULL)
					printf("(nil)");
				break;
			default:
				break;
		}
		ptr++;
		if (*ptr)
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
