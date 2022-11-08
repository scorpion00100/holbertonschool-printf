#include "main.h"

/**
 * is_integer - Print a number in base 10
 * @ap: Number to print in base 10
 * Return: Length of th numbers in decimal
 **/
int print_integer(va_list md)
{
	char *str = NULL;
	int count = 0;

	str = itoa(va_arg(md, int), 10);
	if (!str)
		str = NULL;

	for ( ; str[count] != '\0'; count++)
		putchar(str[count]);

	return (count);
}
