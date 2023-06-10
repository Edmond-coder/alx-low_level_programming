#include "main.h"

/**
 * _strncat - Concatenates two strings, up to n bytes from src
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to be appended from src
 *
 * Return: A pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
