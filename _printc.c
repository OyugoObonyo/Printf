#include "holberton.h"
#include <stdarg.h>

/**
 *print_char- A function that prints a character
 *@arg:The list that hold the character
 *Return:Length of character
 */

int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}
