#include "main.h"

/**
 * _strlen - takes string and returns the length of that string
 * @str: the string argument
 * Return: the lenght of the string
 */

int _strlen(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
