#include "main.h"

/**
 * more_numbers - print from 0-14 10 times
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	i = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			_putchar('0' + j);
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
