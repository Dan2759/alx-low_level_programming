#include <stdio.h>
/**
 * main - Entry point that prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
char d;

d = 'z';
while
(d >= 'a')
{
putchar(d);
d--;
}
putchar('\n');
return (0);
}
