#include "main.h"

/**
 * _printf - This variadic function receives format string and selects the
 * correct conversion specifier and sends it to specific functions
 * @format: The format string
 * Return: The length of the string
 */

int _printf(const char * const format, ...)
{
	conversion map[] = {
		{"%s", print_string}, {"%c", print_char}, {"%%", print_37},
		{"%i", print_int_i}, {"%d", print_int_d}, {"%b", print_bin},
		{"%u", print_unsigned_int}, {"%o", print_octal}, {"%x", print_hex_x},
		{"%X", print_hex_X}
	};

	int i = 0, len = 0;
	int j;
	va_list arguments;

	va_start(arguments, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		va_end(arguments);
		return (-1);
	}
	while (format[i] != '\0')
	{
		j = 9;
		while (j >= 0)
		{
			if (map[j].spec[0] == format[i] && map[j].spec[1] == format[i + 1])
			{
				len = len + map[j].fun(arguments);
				i = i + 2;
				break;
			}
			j--;
		}
		if (j < 0)
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(arguments);
	return (len);
}
