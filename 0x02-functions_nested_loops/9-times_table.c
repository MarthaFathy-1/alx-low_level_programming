#include "main.h"
#include <stdio.h>
/**
 * times_table - function that prints the 9 times table
 *
 * Return: no value
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d", i * j)
			if (i <= 1 && j <= 9)
			{ 
				printf(",  ");
		       	}
			if (i <= 9 && j <= 4)
			{
				printf(",  ");
			}
			if (j != 9)
			{
				printf(",  ");
			}
		}
		printf("\n");
	}
}
