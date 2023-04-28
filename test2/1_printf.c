#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _printf - prints
 *
 *
 * @i: integer used for increment
 * @num: integer variable argument
 * @format: primary argument of function that holds string type
 *
 * Return: Always 0 (Success)
 */

int _printf(const char *format, ...)
{

int num, i = 0;

va_list str_list;

va_start(str_list, format);
if (*format)
{
if (*format == '%')
{
(format++);
switch (*format)
{

case 'd':
num = va_arg(str_list, int);
i++;
printf("%d", num);
break;

case 'i':
num = va_arg(str_list, int);
i++;
printf("%i", num);
break;
}
}
else
{
putchar(*format);
i++;
}
format++;
}
va_end(str_list);
return (0);
}
