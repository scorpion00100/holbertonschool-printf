#include "main.h"

/**
* _putchar - write the character c to stdout
* @c: the character to print
*
* Return: on success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer - save a char in a buffer
 * @c: char
 *
 * Return: 1
 **/
int buffer(char c)
{
	static char buffering[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, buffering, i);
		i = 0;
	}

	if (c != -1)
		buffering[i++] = c;

	return (1);
}
