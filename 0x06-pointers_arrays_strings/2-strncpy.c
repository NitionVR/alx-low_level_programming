#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: string input
 * @src: striing input
 * @n: number of bytes
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;

	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}

	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
