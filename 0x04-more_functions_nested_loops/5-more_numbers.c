#include "main.h"

/**
 * more_numbers - print from 0-14 10 times
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
