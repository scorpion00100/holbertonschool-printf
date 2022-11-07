#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>

/**
 * struct to_format - typedef struct
 * @specifier: form
 * @f: function associated
 **/
typedef struct to_format
{
	char specifier;
	int (*f)(va_list);
} format;

/* _printf */
int _printf(const char *, ...);

/* parsers */
int parser(const char *, va_list);
int percent_parser(const char *, va_list, int *);

/* print_functions */
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_integer(va_list);

/* help_func */
char *itoa(long int num, int base);

#endif
