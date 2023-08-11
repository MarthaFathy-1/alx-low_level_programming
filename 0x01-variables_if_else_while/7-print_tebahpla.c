#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always(0)
 */
int main(void)
{
	char b;

	for (b = 'Z'; b <= 'A'; b--)
	{
		putchar('b' + 32);
	}
	putchar('\n');
	return (0);
}
