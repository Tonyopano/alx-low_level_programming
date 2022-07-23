#include <stdio.h>

/**
*main - This function is a fuction to print its name
*@argc: argc parameter
*@argv: an array of a command of a command listed
*Return: 0 (success)
*/

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0)
}
