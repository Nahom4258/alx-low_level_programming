#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from starting n integer to 98
 * @n: starting number
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n > 98)
		{
			printf("%i, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%i, ", n);
			n--;
		}
	}
}
