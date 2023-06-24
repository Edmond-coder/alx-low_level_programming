#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_integer - Prints an integer.
 * @args: The va_list containing the argument.
 */
void print_integer(va_list args)
{
	int value = va_arg(args, int);
	printf("%d", value);
}
