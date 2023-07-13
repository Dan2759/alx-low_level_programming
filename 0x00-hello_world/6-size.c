#include<stdio.h>
/**
 * main - Entry point
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int x;
	long int y;
	long long int z;
	float d;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
return (0);
}
