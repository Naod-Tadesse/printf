#include "main.h"

/**
 * print_int_i - prints integer using %i format specifier 
 * @arguments: list of numbers to be printed
 * Return: the number of digits
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
	}
	return (len);
}
