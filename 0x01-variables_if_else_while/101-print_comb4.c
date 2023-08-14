#include <stdio.h>
/**
 * main - Entry point
 *
 * program that prints all possible different combinations of three digits
 * Return: return value 0
 */
int main(void)
{
	int r, q, l;

	for (r = 0; r < 10; r++)
	{
		for (q = r + 1; q < 10; q++)
		{
			for (l = q + 1; l < 10; l++)
			{
				putchar(r + '0');
				putchar(q + '0');
				putchar(l + '0');
				if (r + q + l != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
