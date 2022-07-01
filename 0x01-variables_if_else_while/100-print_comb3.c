/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
int i, j;

for (j = 48 ; j < 58 ; j++)
{
for (i = j + 1 ; i < 58 ; i++)
{
putchar(j);
putchar(i);
if (j != 56 || i != 57)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
