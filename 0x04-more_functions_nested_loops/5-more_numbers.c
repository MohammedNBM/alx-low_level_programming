#include "main.h"
/**
 *more_numbers - a function thta prinst from 0 to 14 ten times
 *
 *Return: alwasy success
 *
 */
void more_numbers(void)
{
	int i, j = 0;

	for (; j <= 10; j++)
	{

		for (j = 0; j <= 14; j++)
		{

			if (i > 9)

			_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
