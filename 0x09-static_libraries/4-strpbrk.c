#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of characters
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing the characters to search for
 *
 * Return: A pointer to the first occurrence in @s of any character from @accept,
 *         or NULL if no such character is found
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
