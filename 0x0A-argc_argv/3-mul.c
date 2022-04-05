#include <stdio.h>
#include <stdlib.h>
/**
 * main - print multiplication result
 * @argc: argument counter
 * @argv: argument values
 * Return: 0 if no error, 1 if error
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
