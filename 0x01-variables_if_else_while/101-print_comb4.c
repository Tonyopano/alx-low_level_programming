/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
int i, j, k;

for (j = 48 ; j < 58 ; j++)
{
for (i = j + 1 ; i < 58 ; i++)
{
for (k = i + 1 ; k < 58 ; k++)
{
putchar(j);
putchar(i);
putchar(k);
if (j != 55 || i != 56 || k != 57)
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
