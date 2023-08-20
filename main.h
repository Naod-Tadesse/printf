#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct string_format - conversion specifier and pointer to function
 * @spec: conversion specifier
 * @fun: ponter to function
 */

typedef struct string_format
{
	char *spec;
	int (*fun)();
} conversion;

int _putchar(char ch);
int _strlen(char *str);
int print_char(va_list value);
int print_string(va_list s);
int print_37(void);
int print_int_i(va_list arguments);
int print_int_d(va_list arguments);
int _printf(const char *format, ...);

#endif

