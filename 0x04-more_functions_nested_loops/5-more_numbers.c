#include"main.h"
/**
 *
 *
 *
 */
void more_numbers(void)
{
	char z, x;

	for (z = 0; z <= 9; z++)
	{
		for (x = '0'; x <= '14'; x++)
		{
			if (x >= 10)
			{
				_putchar('1');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
