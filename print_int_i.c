#include "main.h"

/**
 * print_int_i - prints integer using %i format specifier
 * @arguments: list of numbers to be printed
 * Return: the number of digits
 */

int print_int_i(va_list arguments)
{
	int num = va_arg(arguments, int);
	int digit, len = 0, num_digit = 1, num_man;

	if (num >= 0)
	{
		num_man = num;
		while (num_man / 10 != 0)
		{
			num_digit = num_digit * 10;
			num_man /= 10;
		}
		num_man = num;
		while (num_digit > 0)
		{
			digit = num_man  / num_digit;
			_putchar(digit + 48);
			len++;
			num_man = num_man % num_digit;
			num_digit = num_digit / 10;
		}
	}
	else
	{
		len += _putchar('-');
		num_man = -num;
		while (num_man / 10 != 0)
		{
			num_digit = num_digit * 10;
			num_man /= 10;
		}
		num_man = -num;
		while (num_digit > 0)
		{
			digit = num_man  / num_digit;
			len += _putchar(digit + 48);
			num_man = num_man % num_digit;
			num_digit = num_digit / 10;
		}
	}
	return (len);
}

