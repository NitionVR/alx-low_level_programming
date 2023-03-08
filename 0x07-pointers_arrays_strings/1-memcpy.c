#include "main.h"

/**
 *_memcpy - a function that copies memory area.
 *@dest: memory area to copy to
 *@src: memory area to copy from
 *@n: number of bytes
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int k = n;

	for (; i < k; i++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
