#include "main.h"
/**
 *_isdigit - a function that checks for digit
 *@c: parameted to be checked
 *Return: 1 or 0
 */
int _isdigit(int c)
{
	char i = '0';
	int isDigit = 0;

	for (; i <= '9'; i++)
	{
		if (c == i)
		{
			isDigit = 1;
			break;
		}
	}

	return (isDigit);
}
