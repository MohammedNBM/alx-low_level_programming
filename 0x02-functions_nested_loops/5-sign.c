#include "main.h"
/**
 *print_sign - prints sign of the parameter
 *@n: parameter to be checked its sign
 *Return: value of the parameter
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = (1);
		_putchar('+');
	} else if (n == 0)
	{
		value = 0;
		_putchar('0');
	} else
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}
