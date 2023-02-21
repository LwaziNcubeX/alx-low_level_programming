#include <unistd.h>
#include "main.h"

/**
* _putchar - entry point uses stdout to print (c)
*
* Return: 1 (success) && -1 (error) and is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
