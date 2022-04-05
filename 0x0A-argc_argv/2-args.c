#include <stdio.h>
/**
 * main - print all arguments recieved
 * @argc: arg counter
 * @argv: argument values
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = argc - 1; counter >= 0; counter--)
		printf("%s\n", argv[counter]);

	return (0);
}	
