#include "main.h"
/**
 *_strlen -  a function that returns the length of a string.
 * @s: An input string
 * Return: Nothing
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
		len++;
	return (len);
}
