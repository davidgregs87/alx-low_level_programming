#include<stdio.h>
#include <stdlib.h>
/**
 * main - is a function that prints the multiplication of args
 * @argc: is the arguments
 * @argv: is the pointer to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;
	int result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (x = 1; x < argc; x++)
	{
		result = result * atoi(argv[x]);
	}

	printf("%d\n", result);
	return (0);
}
