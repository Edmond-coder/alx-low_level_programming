#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of a string
 *            consisting of only characters from another string
 * @s: Pointer to the string to be analyzed
 * @accept: Pointer to the string containing the characters to match
 *
 * Return: The length of the initial segment of @s that consists of only
 *         characters present in @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
