#include <stdio.h>

/**
 * main - a function that prints its nme followed by a new line.
 * @argc: argument count
 * @argv: argument value, stored in an array.
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
