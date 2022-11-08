#include "main.h"

/**
 * parser - format controll
 * @format: string format
 * @md: list of arguments
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
		len = len + 1;
	}

	return (len);
}

/**
 * percent_parser - controll percent format
 * @format: the parser format
 * @md: list of arguments
 * @i: iterator
 * Return: the number of characters printed
 **/
int percent_parser(const char *format, va_list md, int *i)
{
	int len, j; n_formats;

	the_format formats[] = {
		{'c', print_char}, {'s', print_string},
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
