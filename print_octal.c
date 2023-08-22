#include "main.h"

/**
 * print_octal - prints an octal representation of a number
 * @arguments: the number to be printed in octal format
 * Return: number of digits
 */

int print_octal(va_list arguments)
{
	unsigned int number = va_arg(arguments, unsigned int);
	int oNum[100], i = 0, it;

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	while (number != 0)
	{
		oNum[i] = number % 8;
		number = number / 8;
		i++;
	}

	for (it = i - 1; it >= 0; it--)
	{
		_putchar(oNum[it] + '0');
	}
	return (i);
}
