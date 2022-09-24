#include "main.h"
/**
 *_isupper - a function that checks for uppercase charcther
 *@c: parameter to be checked
 *
 *Return: 1 and 0
 */
int _isupper(int c)
{
	char upperCase = 'A';
	int isUpper = 0;

	for (; upperCase <= 'Z'; upperCase++)
	{
		if (c == upperCase)
		{
			isUpper = 1;
			break;
		}
	}

	return (isUpper);
}
