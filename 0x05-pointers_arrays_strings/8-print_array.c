#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;
	int j = (n - 1);

	for (i = 0; i < j; i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == j)
		{
			printf("%d", a[j]);
		}
			printf("\n");
}
