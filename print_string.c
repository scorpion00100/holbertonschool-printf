#include "main.h"

/**
 * print_string - print a str
 * @md: value of list
 * Return: len of string
 */

int print_string(va_list md)
{
	char *s = NULL;
	int len;

	s = va_arg(md, char*);
	if (!s)
		s = "null";

	for (len = 0; s[len] != '\0'; len++)
		_putchar(s[len]);
	return (len);

