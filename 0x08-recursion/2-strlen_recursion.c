#include "main.h"

/**
 * _strlen_recursion - A function that calculates the length of the string.
 * @s: placeholder for the string.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
