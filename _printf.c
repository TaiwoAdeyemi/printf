#include "main.h"

/**
 * _printf - Produces output
 * @format: Input
 *
 * Return: number
 **/
int _printf(const char *format, ...)
{
	int s;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}
	s = _strlen(format);
	if (s <= 0)
	{
		return (0);
	}

	va_start(args, format);
	s = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (s);
}
