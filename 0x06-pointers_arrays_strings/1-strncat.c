#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * using at most n bytes from src; and src does not need
 * to be null-terminated if it contains n or more bytes.
 * @dest: string input
 * @src: string input
 * @n: number of bytes
 *
 * Return: pointer resulting to the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	k = 0;

	while (k < n && src[k] != '\0')
	{
	dest[i] = src[k];
	i++;
	k++;
	}

	dest[i] = '\0';
	return (dest);
}

