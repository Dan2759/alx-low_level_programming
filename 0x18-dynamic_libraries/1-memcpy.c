#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: input
 * @src: input is copied
 * @n: number of bytes
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;


	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
