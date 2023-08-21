#include "main.h"
/**
 * puts_half - function that prints half of a string
 *
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int n = 0, i;

	while (str[n])
	{
		n++;
	}
	for (i = n / 2; str[i] != '\0'; ++str)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
