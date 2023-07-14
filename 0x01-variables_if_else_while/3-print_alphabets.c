#include <stdio.h>
/**
 * main - Entry point to print the alphabet in uppercase and then in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
char d;

char k;

d = 'a';
k = 'A';
while
(d <= 'z')
{
putchar(d);
d++;
}
while
(k <= 'Z')
{
putchar(k);
k++;
}
putchar('\n');
return (0);
}
