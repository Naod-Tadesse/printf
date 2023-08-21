#include "main.h"

/**
 * print_bin - prints the binary representation of decimal
 * @arguments: the number received
 * Return: the number of bits
 *
 */

int print_bin(va_list arguments)
{
	int bin_Num[32];
	int i = 0, j;
	unsigned int num = va_arg(arguments, unsigned int);
	
	if (num == 0)
	{
		_putchar(0 + '0');
		return(1);
	}
	while (num > 0)
	{
		bin_Num[i] = num % 2;
		num = num / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(bin_Num[j] + '0');
	}
	return (i);
}
