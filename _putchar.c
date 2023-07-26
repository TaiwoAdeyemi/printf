#include "main.h"

/**
 * _putchar - character c to stdout
 * @c: the character to print
 * Return: on success 1.
 * on error, -1 is returned, and error.
 */

int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer - save the character
 * @c: character
 *
 * Return: 1
 */

int buffer(char c)
{
	static char buffers[1024];
	static int index;

	if (c == -1 || index == 1024)
	{
		write(1, buffers, index);
		index = 0;
	}

	if (c != -1)
		buffers[index++] = c;

	return (1);
}
