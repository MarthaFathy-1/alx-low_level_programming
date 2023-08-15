#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char lw;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (lw = 'a'; lw <= 'z'; lw++)
		{
			_putchar(lw);
		}
		_putchar('\n');
	}
}
