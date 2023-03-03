#include "main.h"

/**
 * *_strcat - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then
 * adds a terminating null byte.
 * @dest: string input
 * @src: string input
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int k;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	k = 0;

	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}

	dest[i] = '\0';
	return (dest);
}

