#include "holberton.h"
#include <stdarg.h>

/**
 *print_str- A function that prints a string
 *@arg:The string
 *Return:Length of string
 */
int print_str(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	write(1, s, _strlen(s));
	return (_strlen(s));
}
