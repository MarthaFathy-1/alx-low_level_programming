#include<stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char lc;
	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}	
	putchar('\n');
}
