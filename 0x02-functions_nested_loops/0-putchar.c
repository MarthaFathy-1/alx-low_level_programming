#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: program that prints _putchar
 * Return: Always 0
 */
int main(void)
{
	char lw[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int q;

	for (q = 0; q < 8 ; q++)
	{
		putchar(lw[q]);
	}
	putchar('\n');
	return (0);
}
