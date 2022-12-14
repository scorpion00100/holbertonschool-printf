#include "main.h"

/**
 * parser - format controll
 * @format: string format
 * @md: list all arguments
 * Return: total len of argument with the total len of string
 **/
int parser(const char *format, va_list md)
{
	int len, i, dm;

	len = 0;
	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] == '%')
		{
			dm = percent_parser(format, md, &i);
			if (dm == -1)
				return (-1);

			len += dm;
			continue;
		}

		_putchar(format[i]);
		len += 1;
	}

	return (len);
}

/**
 * percent_parser - controll percent_format
 * @format: analyse_format
 * @md: list all arguments
 * @i: iterating
 * Return: number of char printed
 **/
int percent_parser(const char *format, va_list md, int *i)
{
	int len, j, n_formats;

	the_format formats[] = {
		{'c', print_char}, {'s', print_string},
		{'d', print_integer}, {'i', print_integer},
		{'\0', NULL}
	};

	*i = *i + 1;

	if (format[*i] == '\0')
		return (-1);

	if (format[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	n_formats = sizeof(formats) / sizeof(formats[0]);
	for (len = j = 0; j < n_formats; j++)
	{
		if (format[*i] == formats[j].specify)
		{
			len = formats[j].f(md);
			return (len);
		}

	}

	_putchar('%');
	_putchar(format[*i]);

	return (2);
}
