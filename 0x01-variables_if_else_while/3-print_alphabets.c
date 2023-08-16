#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'get the last digit of the number'
 * Return: always 0
 */
int main(void)
{
	int n = 97;
	int g = 65;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	while (g < 91)
	{
		putchar(g);
		g++;
	}
	putchar('\n');
	return (0);
}
