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

	for (counter = 0; counter < argc; counter++)
	printf("%s\n", argv[counter]);

	return (0);
}	
