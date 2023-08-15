#include "main.h"
/**
 * main - Entry point
 *
 * Description: function that prints the alphabet, in lowercase
 * Return: Always 0
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char lw;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		_putchar(lw);
	}
	_putchar('\n');
}
