#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return value 0
 */
int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		putchar(m + '0');
	}
	putchar('\n');
	return (0);
}
