#include "main.h"

/**
 * _memcpy - Copies a block of memory from source to destination
 * @dest: Pointer to the destination memory block
 * @src: Pointer to the source memory block
 * @n: Number of bytes to copy
 *
 * Return: A pointer to the destination memory block @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
