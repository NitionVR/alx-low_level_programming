#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix
 * substring
 * @s: input string
 * @accept: input
 * Return: 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				i++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
