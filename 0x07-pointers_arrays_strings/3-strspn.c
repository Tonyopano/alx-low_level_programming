#ifndef "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to search
 * Return: Pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	while (*s != '0') /*declaring of while loop*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}
		
		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	reurn (0);/* values null*/

}
