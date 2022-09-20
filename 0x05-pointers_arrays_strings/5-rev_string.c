#include "main.h"
/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int length = 0, i, length2 = 0;
	char tmp;

	while (s[length] != '\0')
		length++;
	length2 = length - 1;
	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length2];
		s[length2] = tmp;
		length2 -= 1;
	}
}
