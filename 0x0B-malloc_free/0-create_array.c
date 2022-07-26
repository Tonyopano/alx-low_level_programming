#include "main.h"

/**
 * create an array - for prints a string
 * @size: number elements array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c);
{
char *buffer;
unsigned int position;

if (size == 0)
{
return (NULL);
}

/* define value with malloc*/
buffer = (char *) malloc(size * size(c));

if (buffer == 0)
{
return (NULL);
}

else
{
position = 0;
while (position < size)
{
*(buffer + position) = c;
position++;
}

return (buffer);
}
}
