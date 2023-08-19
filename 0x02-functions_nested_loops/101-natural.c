#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int t, f, i;
	int sum = 0;

	for (i = 1; i <= 1024; i++)
	{
		t = i % 3;
		f = i % 5;
		
		if (t == 0 || f == 0);
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
