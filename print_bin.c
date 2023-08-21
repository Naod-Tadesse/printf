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
}
