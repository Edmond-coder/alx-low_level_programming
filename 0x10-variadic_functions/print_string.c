#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_string - Prints a string.
 * @args: The va_list containing the argument.
 */
void print_string(va_list args)
{
	char *value = va_arg(args, char *);
	if (value == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", value);
	}
}
