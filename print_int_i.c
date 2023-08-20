#include "main.h"

/**
 * print_int_i - prints integer using %i format specifier
 * @arguments: list of numbers to be printed
 * Return: the number of digits
 */

int print_int_i(va_list arguments)
{
	int num = va_arg(arguments, int);
	int len = 0, num_digit = 1, num_man;

	if (num < 0)
	{
		len += _putchar('-');
		num_man = -num;
	}
	else
	{
		num_man = num;
	}
	while (num_man / num_digit >= 10)
	{
		num_digit = num_digit * 10;
	}
	while (num_digit > 0)
	{
		_putchar((num_man / num_digit) + 48);
		len++;
		num_man = num_man % num_digit;
		num_digit /= 10;
	}
	return (len);
}

