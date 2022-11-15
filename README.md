# holbertonschool-printf
printf_project
Description

"printf" stands for "print formatted" and is one of the main C output functions, it prints a string on the screen using a predefined “format string”, this project emulates some of its functionalities.

Prototype: int _printf(const char *, ...);
Format Specifiers
Format Specifier 	Function name 	Description
c 	is_char 	Print a single character
s 	is_string 	Print a string of characters
d 	is_integer 	Print a decimal base 10 number
i 	is_integer 	Print an integer in base 10


Examples

Character

    Input:

_printf("%c is fun!\n", 'C');

    Output:

C is fun!

String

    Input:

_printf("%s\n", "Read manual of dan and marlyne.");

    Output:

Read manual of dan and marlyne.

Integer or Decimal

    Input:

_printf("today is %i.\n", 13);

    Output:

today is July 13.
