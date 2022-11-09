#include "main.h"

/**
 * print_integer - print a number in base 10
 * @md: num to print in base 10
 * Return: len of num in decimal
 **/
int print_integer(va_list md)
{
	char *s = NULL;
	int n;

	s = itoa(va_arg(md, int), 10);
	if (!s)
		s = NULL;

	for (n = 0 ; s[n] != '\0'; n++)
		_putchar(s[n]);

	return (n);
}
