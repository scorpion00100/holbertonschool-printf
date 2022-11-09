#include "main.h"

/**
 * print_char - function that prints characters
 * @md: variadic list of the function
 * Return: one if not error
 */

int print_char(va_list md)
{
	int dm;

	dm = va_arg(md, int);

	_putchar(dm);

	return (1);

}
