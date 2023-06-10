#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value
 * @s: Pointer to the start of the memory block
 * @b: The value to be set (as an integer)
 * @n: The number of bytes to be set
 *
 * Return: A pointer to the memory block @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return memset(s, b, n);
}
