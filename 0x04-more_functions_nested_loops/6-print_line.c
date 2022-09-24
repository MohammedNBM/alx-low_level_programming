#include "main.h"

/**
 *print_line - a function prints line
 *@n: times to be pinted
 *Return: always success
 */
void print_line(int n)
{
	int i = 0;

	if  (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
