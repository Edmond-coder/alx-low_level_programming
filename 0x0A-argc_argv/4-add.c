#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function that adds the arguments.
 * @argc: argument count.
 * @argv: argument value.
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int num, sum = 0, i;

	if (argc == 1)
	{
		printf("0");
		return (0);
	}

	while (argc-- > 1)
	{
		for (i = 0; i < argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
