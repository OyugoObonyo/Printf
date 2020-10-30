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
int length = 0, checkflag = 0, i = 0;
va_list arguments;
char flag[] = {'c', 's', 'd', 'i', '%'};

va_start(arguments, format);
if (format == NULL)
return (-1);
while (*format)
{
if (*format != '%')
{
if (write(1, format, 1) == -1)
return (-1);
length++;
}
else
{
format++;
if (!*format)
return (-1);
while (flag[i] != '\0')
{
if (*format == flag[i++])
checkflag = 1;
}
if (checkflag == 1)
length += handle_switch(*format, arguments);
else
{
_putchar('%');
_putchar(*format);
length++;
length++;
}
}
format++;
}
return (length);
}
