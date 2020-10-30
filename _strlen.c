#include "holberton.h"

/**
 *_strlen- Gets the length of a string
 *@s: string
 *
 *Return:Length of a string
 */

int _strlen(char *s)
{

	int length = 0;

	while (*s)
	{
		s++;
		length++;
	}
	return (length);
}
