#include <unistd.h>
#include "holberton.h"
/**
 *_putchar - function to print characters
 *@c: variable
 *Return: write macro
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *_puts - function to print string
 *@str: string to print
 *Return: write macro
 */
int _puts(char *str)
{

	int len;

	if (str == NULL)
		str = "(null)";

	for (len = 0; str[len] != '\0'; len++)
		;

	return (write(1, str, len));
}
