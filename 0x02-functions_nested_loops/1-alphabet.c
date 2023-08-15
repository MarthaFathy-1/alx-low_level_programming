#include "main.h"
/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char lw;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		_putchar(lw);
	}
	_putchar('\n');
}
