#include "main.h"

/**
 * print_unsigned_int - prints unsigned integer
 * @arguments: integer to print
 * Return: the number of digits
 */

int print_unsigned_int(va_list arguments)
{
	unsigned int number = va_arg(arguments, unsigned int);
	int len = 1, digits = 1;

	while (number / digits >= 10)
	{
		digits *= 10;
		len++;
	}

	while (digits != 0)
	{
		len += _putchar((number / digits) + 48);
		number = number % digits;
		digits /= 10;
	}
	return (len);
}
