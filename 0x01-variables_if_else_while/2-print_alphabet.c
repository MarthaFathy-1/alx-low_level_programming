#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return value always (0)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
