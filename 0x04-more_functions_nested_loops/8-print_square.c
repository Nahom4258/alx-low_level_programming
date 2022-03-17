#include "main.h"

/**
 * print_square - prints square
 * @size: size of square
 * Return: 0
 */

void print_square(int size)
{
	int i;
	int j;

	i = 0;
	j = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	_putchar('\n');
}
