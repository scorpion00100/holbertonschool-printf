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

		putchar(format[i]);
		len += 1;
	}

	return (len);
}
