#include "main.h"

/**
 * percent_parser - controll percent format
 * @format: the parser format
 * @ap: list of arguments
 * @i: iterator
 * Return: the number of characters printed
 **/
int percent_parser(const char *format, va_list md, int *i)
{
	int len, j;

	to_format formats[] = {
		{'c', print_char}, {'s', print_string},
		{'d', print_integer}, {'i', print_integer},
		{'\0', NULL}
	};

	*i = *i + 1;

	if (format[*i] == '\0')
		return (-1);

	if (format[*i] == '%')
	{
		putchar('%');
		return (1);
	}

	for (len = j = 0; formats[j].specifier; j++)
	{
		if (format[*i] == formats[j].specifier)
		{
			len = formats[j].f(md);
			return (len);
		}

	}

	putchar('%');
	putchar(format[*i]);

	return (2);
}
