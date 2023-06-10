#include "main.h"

/**
 * _strncpy - Copies a specified number of characters from source to destination
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of characters to be copied
 *
 * Return: A pointer to the resulting string @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
