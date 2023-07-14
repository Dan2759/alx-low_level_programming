#include <stdio.h>
/**
 * main - Entry point that prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
char d;

char k;

k = 'a';
d = 0;
while
(d < 10)
{
putchar(d + '0');
d++;
}
while
(k <= 'f')
{
putchar(k);
k++;
}
putchar('\n');
return (0);
}
