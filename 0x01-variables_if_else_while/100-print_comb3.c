#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: return value 0
 */
int main(void)
{
	int r, m;

	for (r = 0; r < 10; r++)
	{
		for (m = r + 1; m < 10; m++)
		{
			putchar(r + '0');
			putchar(m + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
