#include<stdio.h>
/**
 * main - m
 * Return: 0
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
		putchar(i);
	for (c = 'A'; c < 'F'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
