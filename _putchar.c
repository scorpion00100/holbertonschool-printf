#include "main.h"

/**
* _putchar - write the character d to stdout
* @d: the character to print
*
* Return: on success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char d)
{
	return (buffer(d));
}

/**
 * buffer - save a char in a buffer
 * @d: char
 *
 * Return: 1
 **/
int buffer(char d)
{
	static char buffering[1024];
	static int m;

	if (d == -1 || m == 1024)
	{
		write(1, buffering, m);
		m = 0;
	}

	if (d != -1)
		buffering[m++] = d;

	return (1);
}
