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
	if (n % 2 == 0)
	{
		for (i = n / 2 + 1; str[i] != '\0'; ++str)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = (n - 1) / 2;
		for (i = n ; str[i] != '\0'; ++str)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
