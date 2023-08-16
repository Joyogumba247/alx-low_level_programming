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

	while (n < 123)
	{
	if (n == 101 || n == 113)
	{
		n++;
		continue;
	}
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);
}
