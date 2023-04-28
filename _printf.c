#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * _printf - prints
 *
 * @format: primary argument of function that holds string type
 *
 * Return: Always 0 (Success)
 */


int _printf(const char *format, ...)
{
	va_list args;
	const char *p;
	int num, i, done = 0;

	va_start(args, format);

	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			putchar(*p);
			done++;
		} else {
			p++;
			switch (*p)
			{
				case 'c':
					{
						int c = va_arg(args, int);
						putchar(c);
						done++;
						break;
					}
				case 'd':
					{
						int n = va_arg(args, int);
						int temp = n;
						int count = 0;
						while (temp != 0) {
							count++;
							temp /= 10;
						}
						if (n < 0)
						{
							putchar('-');
							done++;
							count++;
							n = -n;
						}
						for ( i = count - 1; i >= 0; i--)
						{
							int digit = n / pow(10, i);
							n %= (int)pow(10, i);
							putchar(digit + '0');
							done++;
						}
						break;

						case 'i':
						num = va_arg(args, int);
						i++;
						printf("%i", num);
						break;

					}
				case 's':
					{
						char *str = va_arg(args, char *);
						while (*str != '\0')
						{
							putchar(*str);
							str++;
							done++;
						}
						break;
					}
				default:
					break;
			}
		}
	}

	va_end(args);

	return done;
}

