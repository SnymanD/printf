#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _printf - prints
 *
 *
 * @str: describe the parameter
 * @bin_num: holds the integer to be converted to binary
 * @mod:holds the modulus of the integer to be converted
 * @mod_sto: array holding modulus of integer
 * @inv_bin: inverts the outputted binary numbers
 * @charac: holds the character argument
 * @format: primary argument of function that holds string type
 * @i: integer used for increment
 * @j: integer used for increment
 *
 * Return: Always 0 (Success)
 */

int _printf(const char *format, ...)
{

int j, i = 0;
char *str;

int len;
va_list str_list;

va_start(str_list, format);
if (*format)
{
if (*format == '%')
{
(format++);
switch (*format)
{

case 'r':
str = va_arg(str_list, char*);
len = strlen(str);
j = len - 1;
while (j >= 0)
{
printf("%c", str[j]);
j--;
}
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
