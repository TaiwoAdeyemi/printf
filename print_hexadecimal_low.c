#include "main.h"

/**
 * print_hexadecimal_low - Print
 * @list: Number
 *
 * Return: total
 **/
int print_hexadecimal_low(va_list list)
{
	char *p_buff;

	int s;

	p_buff = itoa(va_arg(list, unsigned int), 16);

	s = print((p_buff != NULL) ? p_buff : "NULL");

	return (s);

}
