#include "main.h"

/**
 * print_int_i - prints integer with format specifier %i
 * @arguments: integer to be printed to output
 * Return: number of digits
 */
int print_int_i(va_list arguments)
{
	int num = va_arg(arguments, int), j;
	int len = 0, num_digit = 1, num_man;
	char *min_int = "-2147483648";

	if (num == INT_MIN)
	{
		for (j = 0; j < 11; j++)
		{
			_putchar(min_int[j]);
		}
		len = 11;
	}
	else
	{
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
			num_man = num_man % num_digit;
			num_digit /= 10;
			len++;
		}
	}
	return (len);
}
