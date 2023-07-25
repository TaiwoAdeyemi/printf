#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer - save the character in a buffer
 * @c: character
 *
 * Return: 1
 */

int buffer(char c)
{
	static char buffering[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		writ(1, buffering, i);
		i = 0;
	}

	if (c != -1)
		buffering[i++] = c;

	return (1);
}
