#include "main.h"
/**
 *_isalpha -  checks if c is alph
 *@c: to be cheked
 *Return: returns 1 and 0 based to condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
