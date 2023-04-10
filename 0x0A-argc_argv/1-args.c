#include <stdio.h>

/**
 * main - function that counts arguments passed except the first.
 * @argc: argument count.
 * @argv: argument value.
 * Return: 0 (success)
 */

int main(int argc, char __attribute__((unused))*argv[])
{
	printf ("%d\n", argc - 1);
	return 0;
}

