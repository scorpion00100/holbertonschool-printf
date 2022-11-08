#include "main.h"

/**
 * _printf - print output into a specific format
 * @format: is a char str and the format string
 * of zero or more
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/
int _printf(const char *format, ...)
{
	unsigned int len;
	va_list md;

	if (format == NULL)
		return (-1);

	len = strlen(format);
	if (len <= 0)
		return (0);

	va_start(md, format);
	len = parser(format, md);

	_putchar(-1);
	va_end(md);

	return (len);
}
