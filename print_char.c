#include "main.h"

/**
 * print_char - print single character
 * @value: arguments received from variadic function
 * Return: 1 Always
 */

int print_char(va_list value)
{
	char ch;

	ch = va_arg(value, int);
	_putchar(ch);
	return (1);
}
