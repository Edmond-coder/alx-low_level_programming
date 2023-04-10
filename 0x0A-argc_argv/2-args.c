#include<stdio.h>

/**
 * main - function that prints each argument on its own line.
 * @argc: argument count.
 * @argv: argument value.
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
