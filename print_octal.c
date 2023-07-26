#include "main.h"

/**
 * print_octal - Print
 * @list: input
 *
 * Return: Length 
 **/
int print_octal(va_list list)
{
	char *p_buff;
	int x;

	p_buff = itoa(va_arg(list, unsigned int), 8);

	x = print((p_buff != NULL) ? p_buff : "NULL");

	return (x);
}
