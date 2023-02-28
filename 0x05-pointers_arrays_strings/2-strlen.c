#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string variable
 * Return: length (Success)
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
