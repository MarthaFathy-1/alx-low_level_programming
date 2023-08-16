#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, fib[50], result;
	fib[2] = 1;
	fib[3] = 2;
	
	printf("%d, ", fib[2]);
	printf("%d, ", fib[3]);
	for(i = 4; i <= 50; i++)
	{
		result = fib[i] + fib[i-1];
		printf("%d, ", result);
	}
	printf("\n");
	return (0);
}
