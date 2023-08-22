#include "main.h"
/**
 * puts_half - function that prints half of a string
 *
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		n++;
	}
	for (n = n / 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
