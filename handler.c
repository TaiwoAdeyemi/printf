#include "main.h"

/**
 * handler - Format
 * @str: String format
 * @list: List of arguments
 *
 * Return: Total size of arguments
 **/
int handler(const char *str, va_list list)
{
	int x, i, aux;

	x = 0;

	for (i = 0; str[i] != 0; i++)
	{

		if (str[i] == '%')
		{
			aux = percent_handler(str, list, &i);
			if (aux == -1)
			{
				return (-1);
			}
			x += aux;
			continue;
		}
		_putchar(str[i]);
		x = x + 1;
	}
	return (x);
}

/**
 * percent_handler - Controller
 * @str: String
 * @list: List
 * @i: Iterator
 *
 * Return: Size of the numbers of elements printed
 **/
int percent_handler(const char *str, va_list list, int *i)
{
	int size, j, number_formats;
	format formats[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_integer}, {'i', print_integer},
		{'b', print_binary}, {'o', print_octal},
		{'x', print_hexadecimal_low}, {'X', print_hexadecimal_upp},
		{'u', print_unsigned}, {'p', print_pointer},
		{'r', print_rev_string}, {'R', print_rot},
		{'0', NULL}
	};

	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	number_formats = sizeof(formats) / sizeof(formats[0]);
	for (size = j = 0; j < number_formats; j++)
	{
		if (str[*i] == formats[j].type)
		{
			size = formats[j].f(list);
			return (size);
		}
	}
	_putchar('%'), _putchar(str[*i]);

	return (2);
}
