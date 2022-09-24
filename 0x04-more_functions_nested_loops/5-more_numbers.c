#include "main.h"
/**
 *more_numbers - a function thta prinst from 0 to 14 ten times
 *
 *Return: alwasy success
 *
 */
void more_numbers(void)
{
	int i = '0';

	for (; i <= '14'; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
