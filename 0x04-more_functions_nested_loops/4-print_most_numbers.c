#include "main.h"
/**
 *print_most_numbers -function thats prints number from 0 to 9 expect 2 and 4
 *
 *Return: always success
 */
void print_most_numbers(void);
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i == '2' || i == '4')

			continue;

			_putchar(i);
	}
	_putchar('\n');
}
