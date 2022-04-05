#include <stdio.h>
/**
 * main - add positive numbers
 * @argc: argument counter
 * @argv: argument values
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (arg == 3 && atoi(argv[1]) >= 0 && atoi(argv[2]) >= 0)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else if (arg == 1)
	{
		printf(0);
	}
	else
	{
		print("Error\n");
		return (1);
	}

	return (0);
}
