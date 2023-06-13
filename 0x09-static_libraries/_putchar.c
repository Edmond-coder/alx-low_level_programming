#include "main.h"

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, returns the number of bytes written.
 * On error, returns -1 and sets errno appropriately.
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}