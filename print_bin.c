#include "main.h"


/**
 * bin_len - calculates the number of bits needed
 * @num: the number received
 * Return: the numbar of bit
 */

int bin_len(unsigned int num)
{
	unsigned int temp = num;
	int num_bits = 0;

	while ( temp > 0)
	{
		num_bits++;
		temp /= 2;
	}
	return (num_bits);
}


/**
 * print_bin - prints the binary representation of decimal
 * @arguments: the number received
 * Return: the number of bits
 *
 */

int print_bin(va_list arguments)
{
	unsigned int number = va_arg(arguments, unsigned int);
	int no_bit = bin_len(number);
	int binary_bits[no_bit], i;

	for (int i = no_bit - 1; i >= 0; i--)
	{
		binary_bits[i] = number % 2;
		number /=2;
	}
	for (int i = 0; i < no_bit; i++)
	{
		_putchar(binary_bits[i]+'0');
	}
	return (no_bit);
}
