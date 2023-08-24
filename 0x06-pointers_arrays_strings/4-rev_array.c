#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: pointer to array
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int o, p, q;

	for (o = 0, p = (n - 1); o < p; o++, p--)
	{
		q = a[o];
		a[o] = a[p];
		a[p] = q;
	}
}
