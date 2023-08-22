#include "main.h"

/**
 * hex_le - sets length for array
 * @n: the number recieved
 * Return: size of array
 */

int hex_le(int n)
{
	int len_temp = 1;

	while (n / 16 != 0)
	{
		n /= 16;
		len_temp++;
	}
	return (len_temp);
}
/**
 * print_hex_x - prints decimal representation of a number
 * @arguments: the number received
 * Return: the numof digits
 */

int print_hex_x(va_list arguments)
{
	unsigned int number = va_arg(arguments, unsigned int);
	int i = 0, t = 0, val, j, *hex, temp = number, len_temp = 1;

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	val = hex_le(temp);
	hex = malloc(val * sizeof(int));
	if (hex == NULL)
	{
		return (0);
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
			hex[i] = t + 87;
			i++;
		}
		number = number / 16;
	}
	for (j = val - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
	}
	free(hex);
	return (len_temp);
}
