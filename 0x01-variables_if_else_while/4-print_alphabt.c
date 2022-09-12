#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - entery point
 *
 * Return: always (0) sucess
 */
int main(void)
{
	char low, e, q;
	e = 'e';
	q = 'q';
	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != q && low != e)
			putchar(low);
	}
	putchar('\n');
	return (0);
}
