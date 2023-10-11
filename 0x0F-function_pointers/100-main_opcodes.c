#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints the opcodes of its own main function
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, byte;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[i]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;
	for (i = 0; i < byte; i++)
	{
		if (i == byte - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}

