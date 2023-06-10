#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: Pointer to the string to be searched
 * @c: Character to be located
 *
 * Return: A pointer to the first occurrence of the character @c in the string @s,
 *         or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
