#include <stdio.h>
/**
 * main - Entry point to print the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
char d;

d = 'a';
while
(d <= 'z')
{
if ((d != 'q' && d != 'e') && d <= 'z')
putchar(d);
d++;
}
putchar('\n');
return (0);
}
