#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - Prints a character.
 * @args: The va_list containing the argument.
 */

void print_char(va_list args)
{
	int value = va_arg(args, int);
	
	printf("%c", value);
}
