#include "main.h"

/**
 * _strstr - Locates the first occurrence of a substring in a string
 * @haystack: Pointer to the string to be searched
 * @needle: Pointer to the substring to search for
 *
 * Return: A pointer to the first occurrence of @needle in @haystack,
 *         or NULL if @needle is not found
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
