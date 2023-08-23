#include "main.h"

/**
 * print_hex_X - prints decimal representation of a number
 * @arguments: the number received
 * Return: the numof digits
 */

int print_hex_X(va_list arguments)
{
	unsigned int number = va_arg(arguments, unsigned int);
	int i = 0, t = 0, j, hex[100];

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	while (number > 0)
	{
		t = number % 16;

		if (t < 10)
		{
			hex[i] = t + 48;
			i++;
		}
		else
		{
			hex[i] = t + 55;
			i++;
		}

		number = number / 16;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
	}
	return (i);
}
