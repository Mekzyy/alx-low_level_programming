#include <stdio.h>
#include "main.h"

/**
 * print_array - elements of an array of integers
 * @a: array
 * @n: number of values
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
			printf(", ");
	}

	printf("\n");
}
