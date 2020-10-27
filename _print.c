#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>

/**
 *_printf- Prints anything to output
 *@format:Parameter 1
 *@...:Variable number of arguements
 *Return: Length
 */

int _printf(const char *format, ...)
{
int i = 0;
int length = 0;
char char_arg;
char *string_arg;
va_list arguments;

va_start(arguments, format);
while (*(format + i))
{
if ((*(format + i)) != '%')
{
write(STDOUT_FILENO, (format + i), 1);
length++;
}
else
{
i += 1;
switch (*(format + i))
{
case 'c':
char_arg = va_arg(arguments, int);

write(STDOUT_FILENO, &char_arg, 1);
length++;
break;
case 's':
string_arg = va_arg(arguments, char *);

write(STDOUT_FILENO, string_arg, (sizeof(string_arg)) - 1);
length++;
break;
}

}
i++;
}
return (length);
}
