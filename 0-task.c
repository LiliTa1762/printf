#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *_printf - function to print
 *@format: pointer variable char type
 *Return: contador of everything printed
 */
int _printf(const char *format, ...)
{
	va_list ax;
	int i, contador = 0;

	va_start(ax, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			contador += match(format[i + 1], ax);
			i += 1;
		}
		else
		{
			contador += _putchar(format[i]);
		}
	}

	va_end(ax);

	return (contador);
}
/**
 *match - function to match characters
 *@format: variable char type
 *@list: variable va_list type
 *Return: large
 */
int match(char format, va_list list)
{
	int large = 1;

	switch (format)
	{
	case 'c':
		_putchar(va_arg(list, int));
		break;
	case 's':
		large = _puts(va_arg(list, char *));
		break;
	case '%':
		_putchar('%');
		break;
	default:
		_putchar('%');
		large += _putchar(format);
		break;
	}

	return (large);
}
