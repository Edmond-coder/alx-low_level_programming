#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_float - Prints a float.
 * @args: The va_list containing the argument.
 */
void print_float(va_list args)
{
	double value = va_arg(args, double);
	printf("%f", value);
}
