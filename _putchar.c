#include "main.h"

/**
 * _putchar - prints a single character
 * @ch: character to print
 * Return: on success 1, on error -1
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
