#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

typedef struct format_specifier 
{
	char *specifier;
	void (*print_fn)(va_list);
} format_specifier_t;

/**
 * print_all - Prints anything based on the format specifier.
 * @format: The format specifier for the arguments.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *str;
	const char *separator = "";
	format_specifier_t format_specifiers[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (format_specifiers[j].specifier != NULL)
		{
			if (format[i] == format_specifiers[j].specifier[0])
			{
				printf("%s", separator);
				format_specifiers[j].fn(args);
				separator = ", ";
			}
			j++;
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
