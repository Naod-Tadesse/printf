#include "main.h"

/**
 * print_hex_x - prints decimal representation of a number
 * @arguments: the number received
 * Return: the numof digits
 */

int print_hex_x(va_list arguments)
{
	unsigned int number = va_arg(arguments, unsigned int);
	int i = 0, t = 0, j;
	int *hex;
	int temp = number, len_temp = 1;

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	while (temp / 16 != 0)
	{
		temp /= 16;
		len_temp++;
	}
	hex = malloc(len_temp * sizeof(int));

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
			hex[i] = t + 87;
			i++;
		}

		number = number / 16;
	}
	for (j = len_temp - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
	}
	return (len_temp);
}
