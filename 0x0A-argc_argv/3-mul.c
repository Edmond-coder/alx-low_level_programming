#include <stdio.h>

/**
 *main - function takes 2 numbers, multiply them and then print the result;
 * @argc: argument count
 * @argv: argument value
 * Return: 1 0n failure, 0 on success.
 */

int main(int argc, char *argv[])
{
	int n1, n2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = n1 * n2;
	printf("%s\n", result);
	return (0);
}
