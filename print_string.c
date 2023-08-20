#include "main.h"

/**
 * print_string - prints string
 * @s: arguments received
 * Return: 1 Always
 */

int print_string(va_list s)
{
	char *str;
	int i = 0, length;

	str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	length = _strlen(str);
	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	return (length);
}
